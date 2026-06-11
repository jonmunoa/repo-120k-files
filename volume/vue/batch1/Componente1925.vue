<template>
  <section class="panel-1925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1925");
const base = ref(1925);
const total = computed(() => base.value * 2);

function incrementar1925() {
  base.value++;
}
</script>
