<template>
  <section class="panel-42477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42477");
const base = ref(42477);
const total = computed(() => base.value * 2);

function incrementar42477() {
  base.value++;
}
</script>
