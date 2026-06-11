<template>
  <section class="panel-4865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4865");
const base = ref(4865);
const total = computed(() => base.value * 2);

function incrementar4865() {
  base.value++;
}
</script>
