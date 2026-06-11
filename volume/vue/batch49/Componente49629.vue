<template>
  <section class="panel-49629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49629");
const base = ref(49629);
const total = computed(() => base.value * 2);

function incrementar49629() {
  base.value++;
}
</script>
