<template>
  <section class="panel-39745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39745");
const base = ref(39745);
const total = computed(() => base.value * 2);

function incrementar39745() {
  base.value++;
}
</script>
