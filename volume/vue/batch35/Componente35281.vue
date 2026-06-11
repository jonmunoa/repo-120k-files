<template>
  <section class="panel-35281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35281");
const base = ref(35281);
const total = computed(() => base.value * 2);

function incrementar35281() {
  base.value++;
}
</script>
