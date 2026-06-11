<template>
  <section class="panel-6825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6825");
const base = ref(6825);
const total = computed(() => base.value * 2);

function incrementar6825() {
  base.value++;
}
</script>
