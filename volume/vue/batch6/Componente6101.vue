<template>
  <section class="panel-6101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6101");
const base = ref(6101);
const total = computed(() => base.value * 2);

function incrementar6101() {
  base.value++;
}
</script>
