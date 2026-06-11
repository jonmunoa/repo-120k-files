<template>
  <section class="panel-40949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40949");
const base = ref(40949);
const total = computed(() => base.value * 2);

function incrementar40949() {
  base.value++;
}
</script>
