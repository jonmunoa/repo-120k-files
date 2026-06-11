<template>
  <section class="panel-57513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57513");
const base = ref(57513);
const total = computed(() => base.value * 2);

function incrementar57513() {
  base.value++;
}
</script>
