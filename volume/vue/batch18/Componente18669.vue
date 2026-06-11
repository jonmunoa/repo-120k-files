<template>
  <section class="panel-18669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18669");
const base = ref(18669);
const total = computed(() => base.value * 2);

function incrementar18669() {
  base.value++;
}
</script>
