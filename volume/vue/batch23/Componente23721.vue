<template>
  <section class="panel-23721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23721");
const base = ref(23721);
const total = computed(() => base.value * 2);

function incrementar23721() {
  base.value++;
}
</script>
