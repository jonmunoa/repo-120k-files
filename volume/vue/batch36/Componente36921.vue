<template>
  <section class="panel-36921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36921");
const base = ref(36921);
const total = computed(() => base.value * 2);

function incrementar36921() {
  base.value++;
}
</script>
