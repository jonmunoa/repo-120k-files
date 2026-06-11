<template>
  <section class="panel-11145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11145");
const base = ref(11145);
const total = computed(() => base.value * 2);

function incrementar11145() {
  base.value++;
}
</script>
