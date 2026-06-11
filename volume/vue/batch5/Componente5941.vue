<template>
  <section class="panel-5941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5941");
const base = ref(5941);
const total = computed(() => base.value * 2);

function incrementar5941() {
  base.value++;
}
</script>
