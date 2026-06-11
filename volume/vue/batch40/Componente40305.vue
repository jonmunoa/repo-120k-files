<template>
  <section class="panel-40305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40305");
const base = ref(40305);
const total = computed(() => base.value * 2);

function incrementar40305() {
  base.value++;
}
</script>
