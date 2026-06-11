<template>
  <section class="panel-25085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25085");
const base = ref(25085);
const total = computed(() => base.value * 2);

function incrementar25085() {
  base.value++;
}
</script>
