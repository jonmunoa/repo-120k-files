<template>
  <section class="panel-56477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56477");
const base = ref(56477);
const total = computed(() => base.value * 2);

function incrementar56477() {
  base.value++;
}
</script>
