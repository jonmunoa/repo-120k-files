<template>
  <section class="panel-31545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31545");
const base = ref(31545);
const total = computed(() => base.value * 2);

function incrementar31545() {
  base.value++;
}
</script>
