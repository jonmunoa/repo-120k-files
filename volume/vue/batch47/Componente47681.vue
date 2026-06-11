<template>
  <section class="panel-47681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47681");
const base = ref(47681);
const total = computed(() => base.value * 2);

function incrementar47681() {
  base.value++;
}
</script>
