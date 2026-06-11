<template>
  <section class="panel-7177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7177");
const base = ref(7177);
const total = computed(() => base.value * 2);

function incrementar7177() {
  base.value++;
}
</script>
