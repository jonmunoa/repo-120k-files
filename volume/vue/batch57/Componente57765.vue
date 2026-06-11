<template>
  <section class="panel-57765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57765");
const base = ref(57765);
const total = computed(() => base.value * 2);

function incrementar57765() {
  base.value++;
}
</script>
