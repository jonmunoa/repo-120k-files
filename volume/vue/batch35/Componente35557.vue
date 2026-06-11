<template>
  <section class="panel-35557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35557");
const base = ref(35557);
const total = computed(() => base.value * 2);

function incrementar35557() {
  base.value++;
}
</script>
