<template>
  <section class="panel-33997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33997");
const base = ref(33997);
const total = computed(() => base.value * 2);

function incrementar33997() {
  base.value++;
}
</script>
