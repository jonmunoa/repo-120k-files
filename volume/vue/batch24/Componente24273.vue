<template>
  <section class="panel-24273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24273");
const base = ref(24273);
const total = computed(() => base.value * 2);

function incrementar24273() {
  base.value++;
}
</script>
