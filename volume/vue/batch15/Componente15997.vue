<template>
  <section class="panel-15997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15997");
const base = ref(15997);
const total = computed(() => base.value * 2);

function incrementar15997() {
  base.value++;
}
</script>
