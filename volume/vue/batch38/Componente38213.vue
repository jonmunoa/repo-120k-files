<template>
  <section class="panel-38213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38213");
const base = ref(38213);
const total = computed(() => base.value * 2);

function incrementar38213() {
  base.value++;
}
</script>
