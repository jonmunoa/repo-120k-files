<template>
  <section class="panel-5913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5913");
const base = ref(5913);
const total = computed(() => base.value * 2);

function incrementar5913() {
  base.value++;
}
</script>
