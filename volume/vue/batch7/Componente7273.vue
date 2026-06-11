<template>
  <section class="panel-7273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7273");
const base = ref(7273);
const total = computed(() => base.value * 2);

function incrementar7273() {
  base.value++;
}
</script>
