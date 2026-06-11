<template>
  <section class="panel-47361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47361");
const base = ref(47361);
const total = computed(() => base.value * 2);

function incrementar47361() {
  base.value++;
}
</script>
