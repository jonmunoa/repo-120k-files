<template>
  <section class="panel-11041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11041");
const base = ref(11041);
const total = computed(() => base.value * 2);

function incrementar11041() {
  base.value++;
}
</script>
