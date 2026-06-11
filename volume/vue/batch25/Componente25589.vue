<template>
  <section class="panel-25589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25589");
const base = ref(25589);
const total = computed(() => base.value * 2);

function incrementar25589() {
  base.value++;
}
</script>
