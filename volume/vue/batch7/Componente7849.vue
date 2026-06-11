<template>
  <section class="panel-7849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7849");
const base = ref(7849);
const total = computed(() => base.value * 2);

function incrementar7849() {
  base.value++;
}
</script>
