<template>
  <section class="panel-4521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4521");
const base = ref(4521);
const total = computed(() => base.value * 2);

function incrementar4521() {
  base.value++;
}
</script>
