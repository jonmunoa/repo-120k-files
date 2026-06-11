<template>
  <section class="panel-25677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25677");
const base = ref(25677);
const total = computed(() => base.value * 2);

function incrementar25677() {
  base.value++;
}
</script>
