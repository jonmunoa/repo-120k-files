<template>
  <section class="panel-39045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39045");
const base = ref(39045);
const total = computed(() => base.value * 2);

function incrementar39045() {
  base.value++;
}
</script>
