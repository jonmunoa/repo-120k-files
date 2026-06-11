<template>
  <section class="panel-57209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57209");
const base = ref(57209);
const total = computed(() => base.value * 2);

function incrementar57209() {
  base.value++;
}
</script>
