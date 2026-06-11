<template>
  <section class="panel-57689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57689");
const base = ref(57689);
const total = computed(() => base.value * 2);

function incrementar57689() {
  base.value++;
}
</script>
