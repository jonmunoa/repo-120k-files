<template>
  <section class="panel-17753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17753");
const base = ref(17753);
const total = computed(() => base.value * 2);

function incrementar17753() {
  base.value++;
}
</script>
