<template>
  <section class="panel-36941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36941");
const base = ref(36941);
const total = computed(() => base.value * 2);

function incrementar36941() {
  base.value++;
}
</script>
