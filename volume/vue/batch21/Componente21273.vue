<template>
  <section class="panel-21273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21273");
const base = ref(21273);
const total = computed(() => base.value * 2);

function incrementar21273() {
  base.value++;
}
</script>
