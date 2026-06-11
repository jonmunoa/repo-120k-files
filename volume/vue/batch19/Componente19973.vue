<template>
  <section class="panel-19973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19973");
const base = ref(19973);
const total = computed(() => base.value * 2);

function incrementar19973() {
  base.value++;
}
</script>
