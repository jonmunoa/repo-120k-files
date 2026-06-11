<template>
  <section class="panel-33213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33213");
const base = ref(33213);
const total = computed(() => base.value * 2);

function incrementar33213() {
  base.value++;
}
</script>
