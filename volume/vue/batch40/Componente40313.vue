<template>
  <section class="panel-40313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40313");
const base = ref(40313);
const total = computed(() => base.value * 2);

function incrementar40313() {
  base.value++;
}
</script>
