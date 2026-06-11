<template>
  <section class="panel-34085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34085");
const base = ref(34085);
const total = computed(() => base.value * 2);

function incrementar34085() {
  base.value++;
}
</script>
