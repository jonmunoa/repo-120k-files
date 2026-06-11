<template>
  <section class="panel-37477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37477");
const base = ref(37477);
const total = computed(() => base.value * 2);

function incrementar37477() {
  base.value++;
}
</script>
