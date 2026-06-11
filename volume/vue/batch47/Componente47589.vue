<template>
  <section class="panel-47589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47589");
const base = ref(47589);
const total = computed(() => base.value * 2);

function incrementar47589() {
  base.value++;
}
</script>
