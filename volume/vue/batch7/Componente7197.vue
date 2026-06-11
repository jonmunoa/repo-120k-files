<template>
  <section class="panel-7197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7197");
const base = ref(7197);
const total = computed(() => base.value * 2);

function incrementar7197() {
  base.value++;
}
</script>
