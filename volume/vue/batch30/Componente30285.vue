<template>
  <section class="panel-30285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30285");
const base = ref(30285);
const total = computed(() => base.value * 2);

function incrementar30285() {
  base.value++;
}
</script>
