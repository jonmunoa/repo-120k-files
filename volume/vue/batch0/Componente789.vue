<template>
  <section class="panel-789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 789");
const base = ref(789);
const total = computed(() => base.value * 2);

function incrementar789() {
  base.value++;
}
</script>
