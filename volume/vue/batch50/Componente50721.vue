<template>
  <section class="panel-50721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50721");
const base = ref(50721);
const total = computed(() => base.value * 2);

function incrementar50721() {
  base.value++;
}
</script>
