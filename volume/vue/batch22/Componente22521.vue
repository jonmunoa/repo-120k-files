<template>
  <section class="panel-22521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22521");
const base = ref(22521);
const total = computed(() => base.value * 2);

function incrementar22521() {
  base.value++;
}
</script>
