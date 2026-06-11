<template>
  <section class="panel-57381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57381");
const base = ref(57381);
const total = computed(() => base.value * 2);

function incrementar57381() {
  base.value++;
}
</script>
