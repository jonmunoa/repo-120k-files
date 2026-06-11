<template>
  <section class="panel-11545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11545");
const base = ref(11545);
const total = computed(() => base.value * 2);

function incrementar11545() {
  base.value++;
}
</script>
