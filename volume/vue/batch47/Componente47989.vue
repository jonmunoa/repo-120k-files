<template>
  <section class="panel-47989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47989");
const base = ref(47989);
const total = computed(() => base.value * 2);

function incrementar47989() {
  base.value++;
}
</script>
