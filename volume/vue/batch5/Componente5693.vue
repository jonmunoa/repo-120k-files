<template>
  <section class="panel-5693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5693");
const base = ref(5693);
const total = computed(() => base.value * 2);

function incrementar5693() {
  base.value++;
}
</script>
