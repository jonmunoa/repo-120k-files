<template>
  <section class="panel-19213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19213");
const base = ref(19213);
const total = computed(() => base.value * 2);

function incrementar19213() {
  base.value++;
}
</script>
