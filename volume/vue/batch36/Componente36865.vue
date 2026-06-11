<template>
  <section class="panel-36865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36865");
const base = ref(36865);
const total = computed(() => base.value * 2);

function incrementar36865() {
  base.value++;
}
</script>
