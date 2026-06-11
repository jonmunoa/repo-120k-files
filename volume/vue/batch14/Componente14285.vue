<template>
  <section class="panel-14285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14285");
const base = ref(14285);
const total = computed(() => base.value * 2);

function incrementar14285() {
  base.value++;
}
</script>
