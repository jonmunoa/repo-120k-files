<template>
  <section class="panel-5997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5997");
const base = ref(5997);
const total = computed(() => base.value * 2);

function incrementar5997() {
  base.value++;
}
</script>
