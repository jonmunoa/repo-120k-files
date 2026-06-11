<template>
  <section class="panel-57341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57341");
const base = ref(57341);
const total = computed(() => base.value * 2);

function incrementar57341() {
  base.value++;
}
</script>
