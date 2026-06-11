<template>
  <section class="panel-5625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5625");
const base = ref(5625);
const total = computed(() => base.value * 2);

function incrementar5625() {
  base.value++;
}
</script>
