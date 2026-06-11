<template>
  <section class="panel-45089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45089");
const base = ref(45089);
const total = computed(() => base.value * 2);

function incrementar45089() {
  base.value++;
}
</script>
