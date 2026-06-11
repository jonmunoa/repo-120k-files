<template>
  <section class="panel-14865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14865");
const base = ref(14865);
const total = computed(() => base.value * 2);

function incrementar14865() {
  base.value++;
}
</script>
