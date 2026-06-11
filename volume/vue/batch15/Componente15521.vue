<template>
  <section class="panel-15521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15521");
const base = ref(15521);
const total = computed(() => base.value * 2);

function incrementar15521() {
  base.value++;
}
</script>
