<template>
  <section class="panel-39569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39569");
const base = ref(39569);
const total = computed(() => base.value * 2);

function incrementar39569() {
  base.value++;
}
</script>
