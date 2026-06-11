<template>
  <section class="panel-11865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11865");
const base = ref(11865);
const total = computed(() => base.value * 2);

function incrementar11865() {
  base.value++;
}
</script>
