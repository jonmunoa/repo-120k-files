<template>
  <section class="panel-22721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22721");
const base = ref(22721);
const total = computed(() => base.value * 2);

function incrementar22721() {
  base.value++;
}
</script>
