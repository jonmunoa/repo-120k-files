<template>
  <section class="panel-11557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11557");
const base = ref(11557);
const total = computed(() => base.value * 2);

function incrementar11557() {
  base.value++;
}
</script>
