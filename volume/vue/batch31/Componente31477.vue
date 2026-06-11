<template>
  <section class="panel-31477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31477");
const base = ref(31477);
const total = computed(() => base.value * 2);

function incrementar31477() {
  base.value++;
}
</script>
