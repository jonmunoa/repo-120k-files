<template>
  <section class="panel-23865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23865");
const base = ref(23865);
const total = computed(() => base.value * 2);

function incrementar23865() {
  base.value++;
}
</script>
