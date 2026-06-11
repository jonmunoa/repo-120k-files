<template>
  <section class="panel-10637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10637");
const base = ref(10637);
const total = computed(() => base.value * 2);

function incrementar10637() {
  base.value++;
}
</script>
