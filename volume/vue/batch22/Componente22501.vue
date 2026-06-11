<template>
  <section class="panel-22501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22501");
const base = ref(22501);
const total = computed(() => base.value * 2);

function incrementar22501() {
  base.value++;
}
</script>
