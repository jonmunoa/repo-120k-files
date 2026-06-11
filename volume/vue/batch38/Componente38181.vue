<template>
  <section class="panel-38181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38181");
const base = ref(38181);
const total = computed(() => base.value * 2);

function incrementar38181() {
  base.value++;
}
</script>
