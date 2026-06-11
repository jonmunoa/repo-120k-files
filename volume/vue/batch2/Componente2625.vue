<template>
  <section class="panel-2625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2625");
const base = ref(2625);
const total = computed(() => base.value * 2);

function incrementar2625() {
  base.value++;
}
</script>
