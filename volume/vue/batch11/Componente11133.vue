<template>
  <section class="panel-11133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11133");
const base = ref(11133);
const total = computed(() => base.value * 2);

function incrementar11133() {
  base.value++;
}
</script>
