<template>
  <section class="panel-19285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19285");
const base = ref(19285);
const total = computed(() => base.value * 2);

function incrementar19285() {
  base.value++;
}
</script>
