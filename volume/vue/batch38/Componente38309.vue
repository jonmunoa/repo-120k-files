<template>
  <section class="panel-38309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38309");
const base = ref(38309);
const total = computed(() => base.value * 2);

function incrementar38309() {
  base.value++;
}
</script>
