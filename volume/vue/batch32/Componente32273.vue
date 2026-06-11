<template>
  <section class="panel-32273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32273");
const base = ref(32273);
const total = computed(() => base.value * 2);

function incrementar32273() {
  base.value++;
}
</script>
