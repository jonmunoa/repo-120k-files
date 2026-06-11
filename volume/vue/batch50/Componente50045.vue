<template>
  <section class="panel-50045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50045");
const base = ref(50045);
const total = computed(() => base.value * 2);

function incrementar50045() {
  base.value++;
}
</script>
