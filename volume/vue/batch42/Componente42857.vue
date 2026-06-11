<template>
  <section class="panel-42857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42857");
const base = ref(42857);
const total = computed(() => base.value * 2);

function incrementar42857() {
  base.value++;
}
</script>
