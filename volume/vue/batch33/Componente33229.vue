<template>
  <section class="panel-33229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33229");
const base = ref(33229);
const total = computed(() => base.value * 2);

function incrementar33229() {
  base.value++;
}
</script>
