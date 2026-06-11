<template>
  <section class="panel-17865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17865");
const base = ref(17865);
const total = computed(() => base.value * 2);

function incrementar17865() {
  base.value++;
}
</script>
