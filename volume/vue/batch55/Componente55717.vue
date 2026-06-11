<template>
  <section class="panel-55717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55717");
const base = ref(55717);
const total = computed(() => base.value * 2);

function incrementar55717() {
  base.value++;
}
</script>
