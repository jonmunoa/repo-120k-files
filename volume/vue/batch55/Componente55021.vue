<template>
  <section class="panel-55021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55021");
const base = ref(55021);
const total = computed(() => base.value * 2);

function incrementar55021() {
  base.value++;
}
</script>
