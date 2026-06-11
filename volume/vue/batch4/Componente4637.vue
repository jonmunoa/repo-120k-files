<template>
  <section class="panel-4637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4637");
const base = ref(4637);
const total = computed(() => base.value * 2);

function incrementar4637() {
  base.value++;
}
</script>
