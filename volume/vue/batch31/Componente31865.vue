<template>
  <section class="panel-31865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31865");
const base = ref(31865);
const total = computed(() => base.value * 2);

function incrementar31865() {
  base.value++;
}
</script>
