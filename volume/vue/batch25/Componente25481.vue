<template>
  <section class="panel-25481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25481");
const base = ref(25481);
const total = computed(() => base.value * 2);

function incrementar25481() {
  base.value++;
}
</script>
