<template>
  <section class="panel-7085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7085");
const base = ref(7085);
const total = computed(() => base.value * 2);

function incrementar7085() {
  base.value++;
}
</script>
