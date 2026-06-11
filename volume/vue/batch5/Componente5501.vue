<template>
  <section class="panel-5501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5501");
const base = ref(5501);
const total = computed(() => base.value * 2);

function incrementar5501() {
  base.value++;
}
</script>
