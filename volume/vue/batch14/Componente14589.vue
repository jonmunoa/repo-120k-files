<template>
  <section class="panel-14589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14589");
const base = ref(14589);
const total = computed(() => base.value * 2);

function incrementar14589() {
  base.value++;
}
</script>
