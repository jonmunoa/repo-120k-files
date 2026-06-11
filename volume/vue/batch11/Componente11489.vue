<template>
  <section class="panel-11489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11489");
const base = ref(11489);
const total = computed(() => base.value * 2);

function incrementar11489() {
  base.value++;
}
</script>
