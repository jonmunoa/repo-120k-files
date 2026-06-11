<template>
  <section class="panel-31717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31717");
const base = ref(31717);
const total = computed(() => base.value * 2);

function incrementar31717() {
  base.value++;
}
</script>
