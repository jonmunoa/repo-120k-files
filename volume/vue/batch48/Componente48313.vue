<template>
  <section class="panel-48313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48313");
const base = ref(48313);
const total = computed(() => base.value * 2);

function incrementar48313() {
  base.value++;
}
</script>
