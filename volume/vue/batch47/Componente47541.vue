<template>
  <section class="panel-47541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47541");
const base = ref(47541);
const total = computed(() => base.value * 2);

function incrementar47541() {
  base.value++;
}
</script>
