<template>
  <section class="panel-17589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17589");
const base = ref(17589);
const total = computed(() => base.value * 2);

function incrementar17589() {
  base.value++;
}
</script>
