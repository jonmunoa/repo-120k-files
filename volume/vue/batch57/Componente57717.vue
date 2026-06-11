<template>
  <section class="panel-57717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57717");
const base = ref(57717);
const total = computed(() => base.value * 2);

function incrementar57717() {
  base.value++;
}
</script>
