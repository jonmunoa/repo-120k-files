<template>
  <section class="panel-34865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34865");
const base = ref(34865);
const total = computed(() => base.value * 2);

function incrementar34865() {
  base.value++;
}
</script>
