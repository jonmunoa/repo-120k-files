<template>
  <section class="panel-19885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19885");
const base = ref(19885);
const total = computed(() => base.value * 2);

function incrementar19885() {
  base.value++;
}
</script>
