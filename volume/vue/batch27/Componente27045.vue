<template>
  <section class="panel-27045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27045");
const base = ref(27045);
const total = computed(() => base.value * 2);

function incrementar27045() {
  base.value++;
}
</script>
