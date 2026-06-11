<template>
  <section class="panel-36405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36405");
const base = ref(36405);
const total = computed(() => base.value * 2);

function incrementar36405() {
  base.value++;
}
</script>
