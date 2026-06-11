<template>
  <section class="panel-56865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56865");
const base = ref(56865);
const total = computed(() => base.value * 2);

function incrementar56865() {
  base.value++;
}
</script>
