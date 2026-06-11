<template>
  <section class="panel-5973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5973");
const base = ref(5973);
const total = computed(() => base.value * 2);

function incrementar5973() {
  base.value++;
}
</script>
