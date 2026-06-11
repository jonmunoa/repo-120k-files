<template>
  <section class="panel-39285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39285");
const base = ref(39285);
const total = computed(() => base.value * 2);

function incrementar39285() {
  base.value++;
}
</script>
