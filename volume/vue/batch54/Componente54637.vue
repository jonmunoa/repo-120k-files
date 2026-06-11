<template>
  <section class="panel-54637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54637");
const base = ref(54637);
const total = computed(() => base.value * 2);

function incrementar54637() {
  base.value++;
}
</script>
