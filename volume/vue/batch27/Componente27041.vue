<template>
  <section class="panel-27041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27041");
const base = ref(27041);
const total = computed(() => base.value * 2);

function incrementar27041() {
  base.value++;
}
</script>
