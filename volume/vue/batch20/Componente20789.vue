<template>
  <section class="panel-20789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20789");
const base = ref(20789);
const total = computed(() => base.value * 2);

function incrementar20789() {
  base.value++;
}
</script>
