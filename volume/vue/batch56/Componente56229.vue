<template>
  <section class="panel-56229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56229");
const base = ref(56229);
const total = computed(() => base.value * 2);

function incrementar56229() {
  base.value++;
}
</script>
