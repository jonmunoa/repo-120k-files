<template>
  <section class="panel-41273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41273");
const base = ref(41273);
const total = computed(() => base.value * 2);

function incrementar41273() {
  base.value++;
}
</script>
