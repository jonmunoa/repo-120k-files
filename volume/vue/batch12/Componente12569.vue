<template>
  <section class="panel-12569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12569");
const base = ref(12569);
const total = computed(() => base.value * 2);

function incrementar12569() {
  base.value++;
}
</script>
