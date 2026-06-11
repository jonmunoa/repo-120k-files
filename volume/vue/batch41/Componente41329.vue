<template>
  <section class="panel-41329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41329");
const base = ref(41329);
const total = computed(() => base.value * 2);

function incrementar41329() {
  base.value++;
}
</script>
