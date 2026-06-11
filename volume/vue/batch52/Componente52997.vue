<template>
  <section class="panel-52997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52997");
const base = ref(52997);
const total = computed(() => base.value * 2);

function incrementar52997() {
  base.value++;
}
</script>
