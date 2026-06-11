<template>
  <section class="panel-3445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3445");
const base = ref(3445);
const total = computed(() => base.value * 2);

function incrementar3445() {
  base.value++;
}
</script>
