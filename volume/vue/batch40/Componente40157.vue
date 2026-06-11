<template>
  <section class="panel-40157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40157");
const base = ref(40157);
const total = computed(() => base.value * 2);

function incrementar40157() {
  base.value++;
}
</script>
