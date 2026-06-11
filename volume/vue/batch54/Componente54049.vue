<template>
  <section class="panel-54049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54049");
const base = ref(54049);
const total = computed(() => base.value * 2);

function incrementar54049() {
  base.value++;
}
</script>
