<template>
  <section class="panel-8645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8645");
const base = ref(8645);
const total = computed(() => base.value * 2);

function incrementar8645() {
  base.value++;
}
</script>
