<template>
  <section class="panel-4477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4477");
const base = ref(4477);
const total = computed(() => base.value * 2);

function incrementar4477() {
  base.value++;
}
</script>
