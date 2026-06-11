<template>
  <section class="panel-17065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17065");
const base = ref(17065);
const total = computed(() => base.value * 2);

function incrementar17065() {
  base.value++;
}
</script>
