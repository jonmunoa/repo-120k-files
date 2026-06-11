<template>
  <section class="panel-16865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16865");
const base = ref(16865);
const total = computed(() => base.value * 2);

function incrementar16865() {
  base.value++;
}
</script>
