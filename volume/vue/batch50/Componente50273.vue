<template>
  <section class="panel-50273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50273");
const base = ref(50273);
const total = computed(() => base.value * 2);

function incrementar50273() {
  base.value++;
}
</script>
