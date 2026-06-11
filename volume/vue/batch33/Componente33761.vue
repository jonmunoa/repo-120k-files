<template>
  <section class="panel-33761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33761");
const base = ref(33761);
const total = computed(() => base.value * 2);

function incrementar33761() {
  base.value++;
}
</script>
