<template>
  <section class="panel-56141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56141");
const base = ref(56141);
const total = computed(() => base.value * 2);

function incrementar56141() {
  base.value++;
}
</script>
