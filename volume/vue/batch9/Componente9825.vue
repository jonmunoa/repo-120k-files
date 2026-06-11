<template>
  <section class="panel-9825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9825");
const base = ref(9825);
const total = computed(() => base.value * 2);

function incrementar9825() {
  base.value++;
}
</script>
