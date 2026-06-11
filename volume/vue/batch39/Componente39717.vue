<template>
  <section class="panel-39717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39717");
const base = ref(39717);
const total = computed(() => base.value * 2);

function incrementar39717() {
  base.value++;
}
</script>
