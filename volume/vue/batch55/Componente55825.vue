<template>
  <section class="panel-55825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55825");
const base = ref(55825);
const total = computed(() => base.value * 2);

function incrementar55825() {
  base.value++;
}
</script>
