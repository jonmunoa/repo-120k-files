<template>
  <section class="panel-4825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4825");
const base = ref(4825);
const total = computed(() => base.value * 2);

function incrementar4825() {
  base.value++;
}
</script>
