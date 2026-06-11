<template>
  <section class="panel-35221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35221");
const base = ref(35221);
const total = computed(() => base.value * 2);

function incrementar35221() {
  base.value++;
}
</script>
