<template>
  <section class="panel-24301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24301");
const base = ref(24301);
const total = computed(() => base.value * 2);

function incrementar24301() {
  base.value++;
}
</script>
