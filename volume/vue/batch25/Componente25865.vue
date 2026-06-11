<template>
  <section class="panel-25865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25865");
const base = ref(25865);
const total = computed(() => base.value * 2);

function incrementar25865() {
  base.value++;
}
</script>
