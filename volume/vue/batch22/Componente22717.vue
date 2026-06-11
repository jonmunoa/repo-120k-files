<template>
  <section class="panel-22717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22717");
const base = ref(22717);
const total = computed(() => base.value * 2);

function incrementar22717() {
  base.value++;
}
</script>
