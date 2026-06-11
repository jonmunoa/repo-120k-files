<template>
  <section class="panel-40265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40265");
const base = ref(40265);
const total = computed(() => base.value * 2);

function incrementar40265() {
  base.value++;
}
</script>
