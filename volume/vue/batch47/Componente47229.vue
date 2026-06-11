<template>
  <section class="panel-47229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47229");
const base = ref(47229);
const total = computed(() => base.value * 2);

function incrementar47229() {
  base.value++;
}
</script>
