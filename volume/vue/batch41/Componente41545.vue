<template>
  <section class="panel-41545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41545");
const base = ref(41545);
const total = computed(() => base.value * 2);

function incrementar41545() {
  base.value++;
}
</script>
