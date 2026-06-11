<template>
  <section class="panel-10489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10489");
const base = ref(10489);
const total = computed(() => base.value * 2);

function incrementar10489() {
  base.value++;
}
</script>
