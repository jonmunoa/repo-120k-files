<template>
  <section class="panel-41153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41153");
const base = ref(41153);
const total = computed(() => base.value * 2);

function incrementar41153() {
  base.value++;
}
</script>
