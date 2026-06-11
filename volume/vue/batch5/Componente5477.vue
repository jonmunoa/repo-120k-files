<template>
  <section class="panel-5477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5477");
const base = ref(5477);
const total = computed(() => base.value * 2);

function incrementar5477() {
  base.value++;
}
</script>
