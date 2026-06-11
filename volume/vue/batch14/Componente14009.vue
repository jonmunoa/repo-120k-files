<template>
  <section class="panel-14009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14009");
const base = ref(14009);
const total = computed(() => base.value * 2);

function incrementar14009() {
  base.value++;
}
</script>
