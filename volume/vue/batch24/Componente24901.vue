<template>
  <section class="panel-24901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24901");
const base = ref(24901);
const total = computed(() => base.value * 2);

function incrementar24901() {
  base.value++;
}
</script>
