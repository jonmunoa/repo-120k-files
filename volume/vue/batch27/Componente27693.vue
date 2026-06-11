<template>
  <section class="panel-27693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27693");
const base = ref(27693);
const total = computed(() => base.value * 2);

function incrementar27693() {
  base.value++;
}
</script>
