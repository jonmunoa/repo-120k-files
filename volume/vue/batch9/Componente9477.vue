<template>
  <section class="panel-9477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9477");
const base = ref(9477);
const total = computed(() => base.value * 2);

function incrementar9477() {
  base.value++;
}
</script>
