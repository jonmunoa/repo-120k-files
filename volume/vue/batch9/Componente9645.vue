<template>
  <section class="panel-9645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9645");
const base = ref(9645);
const total = computed(() => base.value * 2);

function incrementar9645() {
  base.value++;
}
</script>
