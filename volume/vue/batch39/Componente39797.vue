<template>
  <section class="panel-39797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39797");
const base = ref(39797);
const total = computed(() => base.value * 2);

function incrementar39797() {
  base.value++;
}
</script>
