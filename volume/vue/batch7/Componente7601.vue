<template>
  <section class="panel-7601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7601");
const base = ref(7601);
const total = computed(() => base.value * 2);

function incrementar7601() {
  base.value++;
}
</script>
