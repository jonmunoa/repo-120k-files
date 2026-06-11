<template>
  <section class="panel-35197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35197");
const base = ref(35197);
const total = computed(() => base.value * 2);

function incrementar35197() {
  base.value++;
}
</script>
