<template>
  <section class="panel-51757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51757");
const base = ref(51757);
const total = computed(() => base.value * 2);

function incrementar51757() {
  base.value++;
}
</script>
