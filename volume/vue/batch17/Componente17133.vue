<template>
  <section class="panel-17133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17133");
const base = ref(17133);
const total = computed(() => base.value * 2);

function incrementar17133() {
  base.value++;
}
</script>
