<template>
  <section class="panel-10821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10821");
const base = ref(10821);
const total = computed(() => base.value * 2);

function incrementar10821() {
  base.value++;
}
</script>
