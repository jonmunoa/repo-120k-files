<template>
  <section class="panel-20521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20521");
const base = ref(20521);
const total = computed(() => base.value * 2);

function incrementar20521() {
  base.value++;
}
</script>
