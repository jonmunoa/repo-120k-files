<template>
  <section class="panel-43637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43637");
const base = ref(43637);
const total = computed(() => base.value * 2);

function incrementar43637() {
  base.value++;
}
</script>
