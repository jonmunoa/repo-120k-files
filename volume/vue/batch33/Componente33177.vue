<template>
  <section class="panel-33177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33177");
const base = ref(33177);
const total = computed(() => base.value * 2);

function incrementar33177() {
  base.value++;
}
</script>
