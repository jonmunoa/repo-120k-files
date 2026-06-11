<template>
  <section class="panel-55481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55481");
const base = ref(55481);
const total = computed(() => base.value * 2);

function incrementar55481() {
  base.value++;
}
</script>
