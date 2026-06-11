<template>
  <section class="panel-717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 717");
const base = ref(717);
const total = computed(() => base.value * 2);

function incrementar717() {
  base.value++;
}
</script>
