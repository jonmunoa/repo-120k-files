<template>
  <section class="panel-27345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27345");
const base = ref(27345);
const total = computed(() => base.value * 2);

function incrementar27345() {
  base.value++;
}
</script>
