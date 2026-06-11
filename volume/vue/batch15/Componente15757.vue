<template>
  <section class="panel-15757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15757");
const base = ref(15757);
const total = computed(() => base.value * 2);

function incrementar15757() {
  base.value++;
}
</script>
