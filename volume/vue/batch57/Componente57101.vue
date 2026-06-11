<template>
  <section class="panel-57101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57101");
const base = ref(57101);
const total = computed(() => base.value * 2);

function incrementar57101() {
  base.value++;
}
</script>
