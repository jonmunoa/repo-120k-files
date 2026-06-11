<template>
  <section class="panel-47997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47997");
const base = ref(47997);
const total = computed(() => base.value * 2);

function incrementar47997() {
  base.value++;
}
</script>
