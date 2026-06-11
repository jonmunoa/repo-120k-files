<template>
  <section class="panel-9045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9045");
const base = ref(9045);
const total = computed(() => base.value * 2);

function incrementar9045() {
  base.value++;
}
</script>
