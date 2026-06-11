<template>
  <section class="panel-57073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57073");
const base = ref(57073);
const total = computed(() => base.value * 2);

function incrementar57073() {
  base.value++;
}
</script>
