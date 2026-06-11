<template>
  <section class="panel-7709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7709");
const base = ref(7709);
const total = computed(() => base.value * 2);

function incrementar7709() {
  base.value++;
}
</script>
