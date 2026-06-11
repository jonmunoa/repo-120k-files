<template>
  <section class="panel-38589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38589");
const base = ref(38589);
const total = computed(() => base.value * 2);

function incrementar38589() {
  base.value++;
}
</script>
