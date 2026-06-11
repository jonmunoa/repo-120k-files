<template>
  <section class="panel-21377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21377");
const base = ref(21377);
const total = computed(() => base.value * 2);

function incrementar21377() {
  base.value++;
}
</script>
