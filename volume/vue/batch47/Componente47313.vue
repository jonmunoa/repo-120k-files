<template>
  <section class="panel-47313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47313");
const base = ref(47313);
const total = computed(() => base.value * 2);

function incrementar47313() {
  base.value++;
}
</script>
