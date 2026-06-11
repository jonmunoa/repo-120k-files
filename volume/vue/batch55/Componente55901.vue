<template>
  <section class="panel-55901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55901");
const base = ref(55901);
const total = computed(() => base.value * 2);

function incrementar55901() {
  base.value++;
}
</script>
