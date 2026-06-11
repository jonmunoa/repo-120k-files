<template>
  <section class="panel-21761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21761");
const base = ref(21761);
const total = computed(() => base.value * 2);

function incrementar21761() {
  base.value++;
}
</script>
