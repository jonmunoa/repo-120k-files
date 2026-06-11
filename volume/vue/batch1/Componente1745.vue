<template>
  <section class="panel-1745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1745");
const base = ref(1745);
const total = computed(() => base.value * 2);

function incrementar1745() {
  base.value++;
}
</script>
