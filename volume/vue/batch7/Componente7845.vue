<template>
  <section class="panel-7845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7845");
const base = ref(7845);
const total = computed(() => base.value * 2);

function incrementar7845() {
  base.value++;
}
</script>
