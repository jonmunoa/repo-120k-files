<template>
  <section class="panel-30797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30797");
const base = ref(30797);
const total = computed(() => base.value * 2);

function incrementar30797() {
  base.value++;
}
</script>
