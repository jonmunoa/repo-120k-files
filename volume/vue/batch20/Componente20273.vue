<template>
  <section class="panel-20273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20273");
const base = ref(20273);
const total = computed(() => base.value * 2);

function incrementar20273() {
  base.value++;
}
</script>
