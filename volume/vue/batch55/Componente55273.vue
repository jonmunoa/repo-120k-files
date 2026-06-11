<template>
  <section class="panel-55273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55273");
const base = ref(55273);
const total = computed(() => base.value * 2);

function incrementar55273() {
  base.value++;
}
</script>
