<template>
  <section class="panel-47253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47253");
const base = ref(47253);
const total = computed(() => base.value * 2);

function incrementar47253() {
  base.value++;
}
</script>
