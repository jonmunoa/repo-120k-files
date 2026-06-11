<template>
  <section class="panel-2997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2997");
const base = ref(2997);
const total = computed(() => base.value * 2);

function incrementar2997() {
  base.value++;
}
</script>
