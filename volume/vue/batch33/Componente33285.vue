<template>
  <section class="panel-33285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33285");
const base = ref(33285);
const total = computed(() => base.value * 2);

function incrementar33285() {
  base.value++;
}
</script>
