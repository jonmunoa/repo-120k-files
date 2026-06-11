<template>
  <section class="panel-42649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42649");
const base = ref(42649);
const total = computed(() => base.value * 2);

function incrementar42649() {
  base.value++;
}
</script>
