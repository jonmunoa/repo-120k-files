<template>
  <section class="panel-50605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50605");
const base = ref(50605);
const total = computed(() => base.value * 2);

function incrementar50605() {
  base.value++;
}
</script>
