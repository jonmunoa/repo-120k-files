<template>
  <section class="panel-38893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38893");
const base = ref(38893);
const total = computed(() => base.value * 2);

function incrementar38893() {
  base.value++;
}
</script>
