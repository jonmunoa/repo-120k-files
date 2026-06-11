<template>
  <section class="panel-7361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7361");
const base = ref(7361);
const total = computed(() => base.value * 2);

function incrementar7361() {
  base.value++;
}
</script>
