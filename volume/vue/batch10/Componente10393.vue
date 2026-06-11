<template>
  <section class="panel-10393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10393");
const base = ref(10393);
const total = computed(() => base.value * 2);

function incrementar10393() {
  base.value++;
}
</script>
