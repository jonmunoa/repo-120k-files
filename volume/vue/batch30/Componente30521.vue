<template>
  <section class="panel-30521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30521");
const base = ref(30521);
const total = computed(() => base.value * 2);

function incrementar30521() {
  base.value++;
}
</script>
