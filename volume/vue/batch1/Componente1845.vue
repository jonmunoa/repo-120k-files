<template>
  <section class="panel-1845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1845");
const base = ref(1845);
const total = computed(() => base.value * 2);

function incrementar1845() {
  base.value++;
}
</script>
