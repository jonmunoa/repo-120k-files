<template>
  <section class="panel-9721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9721");
const base = ref(9721);
const total = computed(() => base.value * 2);

function incrementar9721() {
  base.value++;
}
</script>
