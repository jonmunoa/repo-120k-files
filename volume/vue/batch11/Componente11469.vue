<template>
  <section class="panel-11469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11469");
const base = ref(11469);
const total = computed(() => base.value * 2);

function incrementar11469() {
  base.value++;
}
</script>
