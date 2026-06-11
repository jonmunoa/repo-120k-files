<template>
  <section class="panel-31745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31745");
const base = ref(31745);
const total = computed(() => base.value * 2);

function incrementar31745() {
  base.value++;
}
</script>
