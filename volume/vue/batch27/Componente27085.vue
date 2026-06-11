<template>
  <section class="panel-27085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27085");
const base = ref(27085);
const total = computed(() => base.value * 2);

function incrementar27085() {
  base.value++;
}
</script>
