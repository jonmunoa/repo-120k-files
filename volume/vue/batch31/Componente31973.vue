<template>
  <section class="panel-31973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31973");
const base = ref(31973);
const total = computed(() => base.value * 2);

function incrementar31973() {
  base.value++;
}
</script>
