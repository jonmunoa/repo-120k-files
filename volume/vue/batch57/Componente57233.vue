<template>
  <section class="panel-57233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57233");
const base = ref(57233);
const total = computed(() => base.value * 2);

function incrementar57233() {
  base.value++;
}
</script>
