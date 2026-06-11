<template>
  <section class="panel-35305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35305");
const base = ref(35305);
const total = computed(() => base.value * 2);

function incrementar35305() {
  base.value++;
}
</script>
