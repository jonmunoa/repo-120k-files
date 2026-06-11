<template>
  <section class="panel-54101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54101");
const base = ref(54101);
const total = computed(() => base.value * 2);

function incrementar54101() {
  base.value++;
}
</script>
