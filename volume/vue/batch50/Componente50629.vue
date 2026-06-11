<template>
  <section class="panel-50629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50629");
const base = ref(50629);
const total = computed(() => base.value * 2);

function incrementar50629() {
  base.value++;
}
</script>
