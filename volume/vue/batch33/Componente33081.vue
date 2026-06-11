<template>
  <section class="panel-33081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33081");
const base = ref(33081);
const total = computed(() => base.value * 2);

function incrementar33081() {
  base.value++;
}
</script>
