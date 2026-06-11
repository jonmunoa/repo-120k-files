<template>
  <section class="panel-20669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20669");
const base = ref(20669);
const total = computed(() => base.value * 2);

function incrementar20669() {
  base.value++;
}
</script>
