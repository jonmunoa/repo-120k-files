<template>
  <section class="panel-23285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23285");
const base = ref(23285);
const total = computed(() => base.value * 2);

function incrementar23285() {
  base.value++;
}
</script>
