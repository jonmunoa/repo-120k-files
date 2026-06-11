<template>
  <section class="panel-21313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21313");
const base = ref(21313);
const total = computed(() => base.value * 2);

function incrementar21313() {
  base.value++;
}
</script>
