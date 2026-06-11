<template>
  <section class="panel-51997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51997");
const base = ref(51997);
const total = computed(() => base.value * 2);

function incrementar51997() {
  base.value++;
}
</script>
