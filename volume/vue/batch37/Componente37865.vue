<template>
  <section class="panel-37865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37865");
const base = ref(37865);
const total = computed(() => base.value * 2);

function incrementar37865() {
  base.value++;
}
</script>
