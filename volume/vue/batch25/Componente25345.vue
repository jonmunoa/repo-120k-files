<template>
  <section class="panel-25345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25345");
const base = ref(25345);
const total = computed(() => base.value * 2);

function incrementar25345() {
  base.value++;
}
</script>
