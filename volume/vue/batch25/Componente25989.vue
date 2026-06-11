<template>
  <section class="panel-25989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25989");
const base = ref(25989);
const total = computed(() => base.value * 2);

function incrementar25989() {
  base.value++;
}
</script>
