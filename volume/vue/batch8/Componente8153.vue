<template>
  <section class="panel-8153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8153");
const base = ref(8153);
const total = computed(() => base.value * 2);

function incrementar8153() {
  base.value++;
}
</script>
