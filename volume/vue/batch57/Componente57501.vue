<template>
  <section class="panel-57501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57501");
const base = ref(57501);
const total = computed(() => base.value * 2);

function incrementar57501() {
  base.value++;
}
</script>
