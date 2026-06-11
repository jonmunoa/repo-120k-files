<template>
  <section class="panel-24761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24761");
const base = ref(24761);
const total = computed(() => base.value * 2);

function incrementar24761() {
  base.value++;
}
</script>
