<template>
  <section class="panel-36757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36757");
const base = ref(36757);
const total = computed(() => base.value * 2);

function incrementar36757() {
  base.value++;
}
</script>
