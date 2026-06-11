<template>
  <section class="panel-20313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20313");
const base = ref(20313);
const total = computed(() => base.value * 2);

function incrementar20313() {
  base.value++;
}
</script>
