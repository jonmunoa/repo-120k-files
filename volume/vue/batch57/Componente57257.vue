<template>
  <section class="panel-57257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57257");
const base = ref(57257);
const total = computed(() => base.value * 2);

function incrementar57257() {
  base.value++;
}
</script>
