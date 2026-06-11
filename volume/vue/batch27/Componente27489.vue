<template>
  <section class="panel-27489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27489");
const base = ref(27489);
const total = computed(() => base.value * 2);

function incrementar27489() {
  base.value++;
}
</script>
