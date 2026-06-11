<template>
  <section class="panel-3865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3865");
const base = ref(3865);
const total = computed(() => base.value * 2);

function incrementar3865() {
  base.value++;
}
</script>
