<template>
  <section class="panel-7521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7521");
const base = ref(7521);
const total = computed(() => base.value * 2);

function incrementar7521() {
  base.value++;
}
</script>
