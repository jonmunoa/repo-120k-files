<template>
  <section class="panel-57677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57677");
const base = ref(57677);
const total = computed(() => base.value * 2);

function incrementar57677() {
  base.value++;
}
</script>
