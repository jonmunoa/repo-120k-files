<template>
  <section class="panel-17253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17253");
const base = ref(17253);
const total = computed(() => base.value * 2);

function incrementar17253() {
  base.value++;
}
</script>
