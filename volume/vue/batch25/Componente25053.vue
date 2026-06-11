<template>
  <section class="panel-25053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25053");
const base = ref(25053);
const total = computed(() => base.value * 2);

function incrementar25053() {
  base.value++;
}
</script>
