<template>
  <section class="panel-55705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55705");
const base = ref(55705);
const total = computed(() => base.value * 2);

function incrementar55705() {
  base.value++;
}
</script>
