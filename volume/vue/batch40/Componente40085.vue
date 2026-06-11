<template>
  <section class="panel-40085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40085");
const base = ref(40085);
const total = computed(() => base.value * 2);

function incrementar40085() {
  base.value++;
}
</script>
