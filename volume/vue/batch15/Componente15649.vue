<template>
  <section class="panel-15649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15649");
const base = ref(15649);
const total = computed(() => base.value * 2);

function incrementar15649() {
  base.value++;
}
</script>
