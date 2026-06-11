<template>
  <section class="panel-36153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36153");
const base = ref(36153);
const total = computed(() => base.value * 2);

function incrementar36153() {
  base.value++;
}
</script>
