<template>
  <section class="panel-44273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44273");
const base = ref(44273);
const total = computed(() => base.value * 2);

function incrementar44273() {
  base.value++;
}
</script>
