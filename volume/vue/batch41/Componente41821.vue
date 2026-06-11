<template>
  <section class="panel-41821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41821");
const base = ref(41821);
const total = computed(() => base.value * 2);

function incrementar41821() {
  base.value++;
}
</script>
