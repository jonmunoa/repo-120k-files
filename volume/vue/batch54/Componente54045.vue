<template>
  <section class="panel-54045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54045");
const base = ref(54045);
const total = computed(() => base.value * 2);

function incrementar54045() {
  base.value++;
}
</script>
