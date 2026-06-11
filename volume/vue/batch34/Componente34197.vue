<template>
  <section class="panel-34197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34197");
const base = ref(34197);
const total = computed(() => base.value * 2);

function incrementar34197() {
  base.value++;
}
</script>
