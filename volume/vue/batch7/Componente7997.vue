<template>
  <section class="panel-7997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7997");
const base = ref(7997);
const total = computed(() => base.value * 2);

function incrementar7997() {
  base.value++;
}
</script>
