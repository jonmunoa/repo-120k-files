<template>
  <section class="panel-8701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8701");
const base = ref(8701);
const total = computed(() => base.value * 2);

function incrementar8701() {
  base.value++;
}
</script>
