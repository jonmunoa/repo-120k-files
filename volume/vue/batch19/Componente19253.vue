<template>
  <section class="panel-19253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19253");
const base = ref(19253);
const total = computed(() => base.value * 2);

function incrementar19253() {
  base.value++;
}
</script>
