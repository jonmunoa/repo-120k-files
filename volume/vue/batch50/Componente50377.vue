<template>
  <section class="panel-50377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50377");
const base = ref(50377);
const total = computed(() => base.value * 2);

function incrementar50377() {
  base.value++;
}
</script>
