<template>
  <section class="panel-22049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22049");
const base = ref(22049);
const total = computed(() => base.value * 2);

function incrementar22049() {
  base.value++;
}
</script>
