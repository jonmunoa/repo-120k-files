<template>
  <section class="panel-33829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33829");
const base = ref(33829);
const total = computed(() => base.value * 2);

function incrementar33829() {
  base.value++;
}
</script>
