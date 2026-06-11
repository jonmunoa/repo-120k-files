<template>
  <section class="panel-35881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35881");
const base = ref(35881);
const total = computed(() => base.value * 2);

function incrementar35881() {
  base.value++;
}
</script>
