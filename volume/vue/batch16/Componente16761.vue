<template>
  <section class="panel-16761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16761");
const base = ref(16761);
const total = computed(() => base.value * 2);

function incrementar16761() {
  base.value++;
}
</script>
