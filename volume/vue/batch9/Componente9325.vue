<template>
  <section class="panel-9325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9325");
const base = ref(9325);
const total = computed(() => base.value * 2);

function incrementar9325() {
  base.value++;
}
</script>
