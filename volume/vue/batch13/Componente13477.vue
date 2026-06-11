<template>
  <section class="panel-13477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13477");
const base = ref(13477);
const total = computed(() => base.value * 2);

function incrementar13477() {
  base.value++;
}
</script>
