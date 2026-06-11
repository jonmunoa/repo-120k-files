<template>
  <section class="panel-57657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57657");
const base = ref(57657);
const total = computed(() => base.value * 2);

function incrementar57657() {
  base.value++;
}
</script>
