<template>
  <section class="panel-10521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10521");
const base = ref(10521);
const total = computed(() => base.value * 2);

function incrementar10521() {
  base.value++;
}
</script>
