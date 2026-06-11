<template>
  <section class="panel-9865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9865");
const base = ref(9865);
const total = computed(() => base.value * 2);

function incrementar9865() {
  base.value++;
}
</script>
