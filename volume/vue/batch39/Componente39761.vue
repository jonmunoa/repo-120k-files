<template>
  <section class="panel-39761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39761");
const base = ref(39761);
const total = computed(() => base.value * 2);

function incrementar39761() {
  base.value++;
}
</script>
