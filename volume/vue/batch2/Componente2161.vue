<template>
  <section class="panel-2161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2161");
const base = ref(2161);
const total = computed(() => base.value * 2);

function incrementar2161() {
  base.value++;
}
</script>
