<template>
  <section class="panel-36457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36457");
const base = ref(36457);
const total = computed(() => base.value * 2);

function incrementar36457() {
  base.value++;
}
</script>
