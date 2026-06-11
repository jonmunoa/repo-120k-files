<template>
  <section class="panel-2825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2825");
const base = ref(2825);
const total = computed(() => base.value * 2);

function incrementar2825() {
  base.value++;
}
</script>
