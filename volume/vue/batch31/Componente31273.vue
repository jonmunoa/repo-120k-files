<template>
  <section class="panel-31273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31273");
const base = ref(31273);
const total = computed(() => base.value * 2);

function incrementar31273() {
  base.value++;
}
</script>
