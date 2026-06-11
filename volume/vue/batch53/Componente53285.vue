<template>
  <section class="panel-53285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53285");
const base = ref(53285);
const total = computed(() => base.value * 2);

function incrementar53285() {
  base.value++;
}
</script>
