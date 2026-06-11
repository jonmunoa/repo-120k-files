<template>
  <section class="panel-3745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3745");
const base = ref(3745);
const total = computed(() => base.value * 2);

function incrementar3745() {
  base.value++;
}
</script>
