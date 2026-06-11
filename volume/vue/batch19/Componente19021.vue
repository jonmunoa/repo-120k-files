<template>
  <section class="panel-19021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19021");
const base = ref(19021);
const total = computed(() => base.value * 2);

function incrementar19021() {
  base.value++;
}
</script>
