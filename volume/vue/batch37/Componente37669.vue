<template>
  <section class="panel-37669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37669");
const base = ref(37669);
const total = computed(() => base.value * 2);

function incrementar37669() {
  base.value++;
}
</script>
