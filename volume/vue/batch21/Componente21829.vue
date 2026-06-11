<template>
  <section class="panel-21829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21829");
const base = ref(21829);
const total = computed(() => base.value * 2);

function incrementar21829() {
  base.value++;
}
</script>
