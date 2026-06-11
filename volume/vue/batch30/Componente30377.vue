<template>
  <section class="panel-30377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30377");
const base = ref(30377);
const total = computed(() => base.value * 2);

function incrementar30377() {
  base.value++;
}
</script>
