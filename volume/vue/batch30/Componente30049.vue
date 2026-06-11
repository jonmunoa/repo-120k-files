<template>
  <section class="panel-30049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30049");
const base = ref(30049);
const total = computed(() => base.value * 2);

function incrementar30049() {
  base.value++;
}
</script>
