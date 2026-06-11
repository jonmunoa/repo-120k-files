<template>
  <section class="panel-50797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50797");
const base = ref(50797);
const total = computed(() => base.value * 2);

function incrementar50797() {
  base.value++;
}
</script>
