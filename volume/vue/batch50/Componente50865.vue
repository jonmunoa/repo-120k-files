<template>
  <section class="panel-50865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50865");
const base = ref(50865);
const total = computed(() => base.value * 2);

function incrementar50865() {
  base.value++;
}
</script>
