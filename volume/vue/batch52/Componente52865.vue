<template>
  <section class="panel-52865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52865");
const base = ref(52865);
const total = computed(() => base.value * 2);

function incrementar52865() {
  base.value++;
}
</script>
