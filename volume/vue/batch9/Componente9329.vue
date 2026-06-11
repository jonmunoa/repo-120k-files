<template>
  <section class="panel-9329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9329");
const base = ref(9329);
const total = computed(() => base.value * 2);

function incrementar9329() {
  base.value++;
}
</script>
