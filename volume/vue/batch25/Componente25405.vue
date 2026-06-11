<template>
  <section class="panel-25405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25405");
const base = ref(25405);
const total = computed(() => base.value * 2);

function incrementar25405() {
  base.value++;
}
</script>
