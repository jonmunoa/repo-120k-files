<template>
  <section class="panel-57265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57265");
const base = ref(57265);
const total = computed(() => base.value * 2);

function incrementar57265() {
  base.value++;
}
</script>
