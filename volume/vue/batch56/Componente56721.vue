<template>
  <section class="panel-56721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56721");
const base = ref(56721);
const total = computed(() => base.value * 2);

function incrementar56721() {
  base.value++;
}
</script>
