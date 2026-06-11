<template>
  <section class="panel-9313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9313");
const base = ref(9313);
const total = computed(() => base.value * 2);

function incrementar9313() {
  base.value++;
}
</script>
