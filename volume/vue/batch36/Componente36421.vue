<template>
  <section class="panel-36421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36421");
const base = ref(36421);
const total = computed(() => base.value * 2);

function incrementar36421() {
  base.value++;
}
</script>
