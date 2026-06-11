<template>
  <section class="panel-10709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10709");
const base = ref(10709);
const total = computed(() => base.value * 2);

function incrementar10709() {
  base.value++;
}
</script>
