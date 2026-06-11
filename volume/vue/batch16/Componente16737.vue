<template>
  <section class="panel-16737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16737");
const base = ref(16737);
const total = computed(() => base.value * 2);

function incrementar16737() {
  base.value++;
}
</script>
