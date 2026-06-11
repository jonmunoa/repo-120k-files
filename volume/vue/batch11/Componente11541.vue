<template>
  <section class="panel-11541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11541");
const base = ref(11541);
const total = computed(() => base.value * 2);

function incrementar11541() {
  base.value++;
}
</script>
