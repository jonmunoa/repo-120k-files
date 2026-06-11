<template>
  <section class="panel-49457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49457");
const base = ref(49457);
const total = computed(() => base.value * 2);

function incrementar49457() {
  base.value++;
}
</script>
