<template>
  <section class="panel-765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 765");
const base = ref(765);
const total = computed(() => base.value * 2);

function incrementar765() {
  base.value++;
}
</script>
