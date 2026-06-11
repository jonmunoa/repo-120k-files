<template>
  <section class="panel-51285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51285");
const base = ref(51285);
const total = computed(() => base.value * 2);

function incrementar51285() {
  base.value++;
}
</script>
