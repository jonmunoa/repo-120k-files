<template>
  <section class="panel-17789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17789");
const base = ref(17789);
const total = computed(() => base.value * 2);

function incrementar17789() {
  base.value++;
}
</script>
