<template>
  <section class="panel-6637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6637");
const base = ref(6637);
const total = computed(() => base.value * 2);

function incrementar6637() {
  base.value++;
}
</script>
