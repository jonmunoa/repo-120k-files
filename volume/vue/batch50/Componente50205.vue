<template>
  <section class="panel-50205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50205");
const base = ref(50205);
const total = computed(() => base.value * 2);

function incrementar50205() {
  base.value++;
}
</script>
