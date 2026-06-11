<template>
  <section class="panel-53901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53901");
const base = ref(53901);
const total = computed(() => base.value * 2);

function incrementar53901() {
  base.value++;
}
</script>
