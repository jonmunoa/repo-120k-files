<template>
  <section class="panel-3649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3649");
const base = ref(3649);
const total = computed(() => base.value * 2);

function incrementar3649() {
  base.value++;
}
</script>
