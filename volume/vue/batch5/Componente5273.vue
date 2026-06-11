<template>
  <section class="panel-5273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5273");
const base = ref(5273);
const total = computed(() => base.value * 2);

function incrementar5273() {
  base.value++;
}
</script>
