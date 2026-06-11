<template>
  <section class="panel-55105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55105");
const base = ref(55105);
const total = computed(() => base.value * 2);

function incrementar55105() {
  base.value++;
}
</script>
