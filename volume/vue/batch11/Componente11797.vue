<template>
  <section class="panel-11797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11797");
const base = ref(11797);
const total = computed(() => base.value * 2);

function incrementar11797() {
  base.value++;
}
</script>
