<template>
  <section class="panel-541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 541");
const base = ref(541);
const total = computed(() => base.value * 2);

function incrementar541() {
  base.value++;
}
</script>
