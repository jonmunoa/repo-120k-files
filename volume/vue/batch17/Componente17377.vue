<template>
  <section class="panel-17377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17377");
const base = ref(17377);
const total = computed(() => base.value * 2);

function incrementar17377() {
  base.value++;
}
</script>
