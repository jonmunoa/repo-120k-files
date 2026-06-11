<template>
  <section class="panel-53085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53085");
const base = ref(53085);
const total = computed(() => base.value * 2);

function incrementar53085() {
  base.value++;
}
</script>
