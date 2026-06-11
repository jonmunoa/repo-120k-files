<template>
  <section class="panel-10745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10745");
const base = ref(10745);
const total = computed(() => base.value * 2);

function incrementar10745() {
  base.value++;
}
</script>
