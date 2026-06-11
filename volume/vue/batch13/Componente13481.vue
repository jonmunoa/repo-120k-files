<template>
  <section class="panel-13481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13481");
const base = ref(13481);
const total = computed(() => base.value * 2);

function incrementar13481() {
  base.value++;
}
</script>
