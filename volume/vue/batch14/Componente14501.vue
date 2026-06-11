<template>
  <section class="panel-14501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14501");
const base = ref(14501);
const total = computed(() => base.value * 2);

function incrementar14501() {
  base.value++;
}
</script>
