<template>
  <section class="panel-9589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9589");
const base = ref(9589);
const total = computed(() => base.value * 2);

function incrementar9589() {
  base.value++;
}
</script>
