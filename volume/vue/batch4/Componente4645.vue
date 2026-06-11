<template>
  <section class="panel-4645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4645");
const base = ref(4645);
const total = computed(() => base.value * 2);

function incrementar4645() {
  base.value++;
}
</script>
