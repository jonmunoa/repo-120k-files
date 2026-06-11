<template>
  <section class="panel-19209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19209");
const base = ref(19209);
const total = computed(() => base.value * 2);

function incrementar19209() {
  base.value++;
}
</script>
