<template>
  <section class="panel-17533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17533");
const base = ref(17533);
const total = computed(() => base.value * 2);

function incrementar17533() {
  base.value++;
}
</script>
