<template>
  <section class="panel-35345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35345");
const base = ref(35345);
const total = computed(() => base.value * 2);

function incrementar35345() {
  base.value++;
}
</script>
