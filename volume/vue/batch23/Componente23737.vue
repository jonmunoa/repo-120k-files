<template>
  <section class="panel-23737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23737");
const base = ref(23737);
const total = computed(() => base.value * 2);

function incrementar23737() {
  base.value++;
}
</script>
