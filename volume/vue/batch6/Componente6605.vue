<template>
  <section class="panel-6605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6605");
const base = ref(6605);
const total = computed(() => base.value * 2);

function incrementar6605() {
  base.value++;
}
</script>
