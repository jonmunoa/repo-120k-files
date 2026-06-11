<template>
  <section class="panel-48773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48773");
const base = ref(48773);
const total = computed(() => base.value * 2);

function incrementar48773() {
  base.value++;
}
</script>
