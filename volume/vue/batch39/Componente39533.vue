<template>
  <section class="panel-39533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39533");
const base = ref(39533);
const total = computed(() => base.value * 2);

function incrementar39533() {
  base.value++;
}
</script>
