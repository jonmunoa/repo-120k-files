<template>
  <section class="panel-19745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19745");
const base = ref(19745);
const total = computed(() => base.value * 2);

function incrementar19745() {
  base.value++;
}
</script>
