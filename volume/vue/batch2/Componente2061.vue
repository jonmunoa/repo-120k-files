<template>
  <section class="panel-2061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2061");
const base = ref(2061);
const total = computed(() => base.value * 2);

function incrementar2061() {
  base.value++;
}
</script>
