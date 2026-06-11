<template>
  <section class="panel-57557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57557");
const base = ref(57557);
const total = computed(() => base.value * 2);

function incrementar57557() {
  base.value++;
}
</script>
