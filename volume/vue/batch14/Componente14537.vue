<template>
  <section class="panel-14537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14537");
const base = ref(14537);
const total = computed(() => base.value * 2);

function incrementar14537() {
  base.value++;
}
</script>
