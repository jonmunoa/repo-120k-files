<template>
  <section class="panel-2717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2717");
const base = ref(2717);
const total = computed(() => base.value * 2);

function incrementar2717() {
  base.value++;
}
</script>
