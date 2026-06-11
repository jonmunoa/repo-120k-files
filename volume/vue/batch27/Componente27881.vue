<template>
  <section class="panel-27881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27881");
const base = ref(27881);
const total = computed(() => base.value * 2);

function incrementar27881() {
  base.value++;
}
</script>
