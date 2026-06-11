<template>
  <section class="panel-34377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34377");
const base = ref(34377);
const total = computed(() => base.value * 2);

function incrementar34377() {
  base.value++;
}
</script>
