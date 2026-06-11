<template>
  <section class="panel-30501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30501");
const base = ref(30501);
const total = computed(() => base.value * 2);

function incrementar30501() {
  base.value++;
}
</script>
