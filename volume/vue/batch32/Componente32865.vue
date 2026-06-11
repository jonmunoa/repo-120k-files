<template>
  <section class="panel-32865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32865");
const base = ref(32865);
const total = computed(() => base.value * 2);

function incrementar32865() {
  base.value++;
}
</script>
