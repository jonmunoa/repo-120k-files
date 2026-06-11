<template>
  <section class="panel-19329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19329");
const base = ref(19329);
const total = computed(() => base.value * 2);

function incrementar19329() {
  base.value++;
}
</script>
