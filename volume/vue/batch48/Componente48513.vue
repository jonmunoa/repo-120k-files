<template>
  <section class="panel-48513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48513");
const base = ref(48513);
const total = computed(() => base.value * 2);

function incrementar48513() {
  base.value++;
}
</script>
