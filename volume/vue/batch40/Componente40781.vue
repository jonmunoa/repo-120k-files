<template>
  <section class="panel-40781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40781");
const base = ref(40781);
const total = computed(() => base.value * 2);

function incrementar40781() {
  base.value++;
}
</script>
