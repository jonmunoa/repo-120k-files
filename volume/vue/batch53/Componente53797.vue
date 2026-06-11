<template>
  <section class="panel-53797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53797");
const base = ref(53797);
const total = computed(() => base.value * 2);

function incrementar53797() {
  base.value++;
}
</script>
