<template>
  <section class="panel-5865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5865");
const base = ref(5865);
const total = computed(() => base.value * 2);

function incrementar5865() {
  base.value++;
}
</script>
