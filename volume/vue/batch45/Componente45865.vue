<template>
  <section class="panel-45865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45865");
const base = ref(45865);
const total = computed(() => base.value * 2);

function incrementar45865() {
  base.value++;
}
</script>
