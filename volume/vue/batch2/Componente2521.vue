<template>
  <section class="panel-2521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2521");
const base = ref(2521);
const total = computed(() => base.value * 2);

function incrementar2521() {
  base.value++;
}
</script>
