<template>
  <section class="panel-40821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40821");
const base = ref(40821);
const total = computed(() => base.value * 2);

function incrementar40821() {
  base.value++;
}
</script>
