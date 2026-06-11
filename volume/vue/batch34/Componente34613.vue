<template>
  <section class="panel-34613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34613");
const base = ref(34613);
const total = computed(() => base.value * 2);

function incrementar34613() {
  base.value++;
}
</script>
