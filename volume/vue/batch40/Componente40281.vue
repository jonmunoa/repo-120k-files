<template>
  <section class="panel-40281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40281");
const base = ref(40281);
const total = computed(() => base.value * 2);

function incrementar40281() {
  base.value++;
}
</script>
