<template>
  <section class="panel-44329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44329");
const base = ref(44329);
const total = computed(() => base.value * 2);

function incrementar44329() {
  base.value++;
}
</script>
