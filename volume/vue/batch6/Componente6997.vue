<template>
  <section class="panel-6997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6997");
const base = ref(6997);
const total = computed(() => base.value * 2);

function incrementar6997() {
  base.value++;
}
</script>
