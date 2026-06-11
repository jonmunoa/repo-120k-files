<template>
  <section class="panel-55157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55157");
const base = ref(55157);
const total = computed(() => base.value * 2);

function incrementar55157() {
  base.value++;
}
</script>
