<template>
  <section class="panel-25477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25477");
const base = ref(25477);
const total = computed(() => base.value * 2);

function incrementar25477() {
  base.value++;
}
</script>
