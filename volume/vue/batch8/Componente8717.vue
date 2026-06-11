<template>
  <section class="panel-8717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8717");
const base = ref(8717);
const total = computed(() => base.value * 2);

function incrementar8717() {
  base.value++;
}
</script>
