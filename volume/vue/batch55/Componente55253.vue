<template>
  <section class="panel-55253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55253");
const base = ref(55253);
const total = computed(() => base.value * 2);

function incrementar55253() {
  base.value++;
}
</script>
