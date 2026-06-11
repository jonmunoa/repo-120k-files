<template>
  <section class="panel-11237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11237");
const base = ref(11237);
const total = computed(() => base.value * 2);

function incrementar11237() {
  base.value++;
}
</script>
