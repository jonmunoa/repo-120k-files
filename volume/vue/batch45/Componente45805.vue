<template>
  <section class="panel-45805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45805");
const base = ref(45805);
const total = computed(() => base.value * 2);

function incrementar45805() {
  base.value++;
}
</script>
