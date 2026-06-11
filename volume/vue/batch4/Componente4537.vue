<template>
  <section class="panel-4537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4537");
const base = ref(4537);
const total = computed(() => base.value * 2);

function incrementar4537() {
  base.value++;
}
</script>
