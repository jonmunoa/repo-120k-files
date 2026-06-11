<template>
  <section class="panel-55085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55085");
const base = ref(55085);
const total = computed(() => base.value * 2);

function incrementar55085() {
  base.value++;
}
</script>
