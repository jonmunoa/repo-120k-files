<template>
  <section class="panel-3757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3757");
const base = ref(3757);
const total = computed(() => base.value * 2);

function incrementar3757() {
  base.value++;
}
</script>
