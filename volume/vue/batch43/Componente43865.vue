<template>
  <section class="panel-43865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43865");
const base = ref(43865);
const total = computed(() => base.value * 2);

function incrementar43865() {
  base.value++;
}
</script>
