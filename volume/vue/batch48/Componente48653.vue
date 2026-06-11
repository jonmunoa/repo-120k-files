<template>
  <section class="panel-48653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48653");
const base = ref(48653);
const total = computed(() => base.value * 2);

function incrementar48653() {
  base.value++;
}
</script>
