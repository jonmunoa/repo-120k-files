<template>
  <section class="panel-34717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34717");
const base = ref(34717);
const total = computed(() => base.value * 2);

function incrementar34717() {
  base.value++;
}
</script>
