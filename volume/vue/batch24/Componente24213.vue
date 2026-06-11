<template>
  <section class="panel-24213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24213");
const base = ref(24213);
const total = computed(() => base.value * 2);

function incrementar24213() {
  base.value++;
}
</script>
