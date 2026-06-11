<template>
  <section class="panel-20305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20305");
const base = ref(20305);
const total = computed(() => base.value * 2);

function incrementar20305() {
  base.value++;
}
</script>
