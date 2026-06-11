<template>
  <section class="panel-54329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54329");
const base = ref(54329);
const total = computed(() => base.value * 2);

function incrementar54329() {
  base.value++;
}
</script>
