<template>
  <section class="panel-33273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33273");
const base = ref(33273);
const total = computed(() => base.value * 2);

function incrementar33273() {
  base.value++;
}
</script>
