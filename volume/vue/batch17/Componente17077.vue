<template>
  <section class="panel-17077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17077");
const base = ref(17077);
const total = computed(() => base.value * 2);

function incrementar17077() {
  base.value++;
}
</script>
