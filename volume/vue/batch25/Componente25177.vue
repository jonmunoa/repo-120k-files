<template>
  <section class="panel-25177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25177");
const base = ref(25177);
const total = computed(() => base.value * 2);

function incrementar25177() {
  base.value++;
}
</script>
