<template>
  <section class="panel-13601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13601");
const base = ref(13601);
const total = computed(() => base.value * 2);

function incrementar13601() {
  base.value++;
}
</script>
