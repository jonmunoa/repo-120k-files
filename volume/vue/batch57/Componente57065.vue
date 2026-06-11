<template>
  <section class="panel-57065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57065");
const base = ref(57065);
const total = computed(() => base.value * 2);

function incrementar57065() {
  base.value++;
}
</script>
