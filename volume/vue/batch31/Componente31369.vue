<template>
  <section class="panel-31369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31369");
const base = ref(31369);
const total = computed(() => base.value * 2);

function incrementar31369() {
  base.value++;
}
</script>
