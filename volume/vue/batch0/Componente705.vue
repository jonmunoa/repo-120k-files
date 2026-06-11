<template>
  <section class="panel-705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 705");
const base = ref(705);
const total = computed(() => base.value * 2);

function incrementar705() {
  base.value++;
}
</script>
