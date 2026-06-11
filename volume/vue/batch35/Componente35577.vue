<template>
  <section class="panel-35577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35577");
const base = ref(35577);
const total = computed(() => base.value * 2);

function incrementar35577() {
  base.value++;
}
</script>
