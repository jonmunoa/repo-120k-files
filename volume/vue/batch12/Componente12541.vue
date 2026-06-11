<template>
  <section class="panel-12541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12541");
const base = ref(12541);
const total = computed(() => base.value * 2);

function incrementar12541() {
  base.value++;
}
</script>
