<template>
  <section class="panel-16721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16721");
const base = ref(16721);
const total = computed(() => base.value * 2);

function incrementar16721() {
  base.value++;
}
</script>
