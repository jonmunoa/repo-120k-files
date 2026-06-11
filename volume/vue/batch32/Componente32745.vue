<template>
  <section class="panel-32745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32745");
const base = ref(32745);
const total = computed(() => base.value * 2);

function incrementar32745() {
  base.value++;
}
</script>
