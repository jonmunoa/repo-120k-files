<template>
  <section class="panel-48373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48373");
const base = ref(48373);
const total = computed(() => base.value * 2);

function incrementar48373() {
  base.value++;
}
</script>
