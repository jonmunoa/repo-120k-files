<template>
  <section class="panel-989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 989");
const base = ref(989);
const total = computed(() => base.value * 2);

function incrementar989() {
  base.value++;
}
</script>
