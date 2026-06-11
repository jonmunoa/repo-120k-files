<template>
  <section class="panel-45997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45997");
const base = ref(45997);
const total = computed(() => base.value * 2);

function incrementar45997() {
  base.value++;
}
</script>
