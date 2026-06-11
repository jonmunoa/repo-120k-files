<template>
  <section class="panel-11413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11413");
const base = ref(11413);
const total = computed(() => base.value * 2);

function incrementar11413() {
  base.value++;
}
</script>
