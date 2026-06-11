<template>
  <section class="panel-22845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22845");
const base = ref(22845);
const total = computed(() => base.value * 2);

function incrementar22845() {
  base.value++;
}
</script>
