<template>
  <section class="panel-15357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15357");
const base = ref(15357);
const total = computed(() => base.value * 2);

function incrementar15357() {
  base.value++;
}
</script>
