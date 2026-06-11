<template>
  <section class="panel-17053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17053");
const base = ref(17053);
const total = computed(() => base.value * 2);

function incrementar17053() {
  base.value++;
}
</script>
