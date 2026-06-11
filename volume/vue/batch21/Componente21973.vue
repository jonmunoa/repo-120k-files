<template>
  <section class="panel-21973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21973");
const base = ref(21973);
const total = computed(() => base.value * 2);

function incrementar21973() {
  base.value++;
}
</script>
