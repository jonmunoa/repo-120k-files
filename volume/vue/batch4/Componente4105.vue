<template>
  <section class="panel-4105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4105");
const base = ref(4105);
const total = computed(() => base.value * 2);

function incrementar4105() {
  base.value++;
}
</script>
