<template>
  <section class="panel-569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 569");
const base = ref(569);
const total = computed(() => base.value * 2);

function incrementar569() {
  base.value++;
}
</script>
