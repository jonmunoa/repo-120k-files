<template>
  <section class="panel-32645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32645");
const base = ref(32645);
const total = computed(() => base.value * 2);

function incrementar32645() {
  base.value++;
}
</script>
