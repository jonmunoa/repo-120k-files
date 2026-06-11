<template>
  <section class="panel-22229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22229");
const base = ref(22229);
const total = computed(() => base.value * 2);

function incrementar22229() {
  base.value++;
}
</script>
