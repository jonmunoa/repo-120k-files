<template>
  <section class="panel-29181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29181");
const base = ref(29181);
const total = computed(() => base.value * 2);

function incrementar29181() {
  base.value++;
}
</script>
