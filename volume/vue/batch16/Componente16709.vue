<template>
  <section class="panel-16709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16709");
const base = ref(16709);
const total = computed(() => base.value * 2);

function incrementar16709() {
  base.value++;
}
</script>
