<template>
  <section class="panel-19273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19273");
const base = ref(19273);
const total = computed(() => base.value * 2);

function incrementar19273() {
  base.value++;
}
</script>
