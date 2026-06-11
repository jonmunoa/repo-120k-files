<template>
  <section class="panel-10625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10625");
const base = ref(10625);
const total = computed(() => base.value * 2);

function incrementar10625() {
  base.value++;
}
</script>
