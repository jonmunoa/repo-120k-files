<template>
  <section class="panel-50105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50105");
const base = ref(50105);
const total = computed(() => base.value * 2);

function incrementar50105() {
  base.value++;
}
</script>
