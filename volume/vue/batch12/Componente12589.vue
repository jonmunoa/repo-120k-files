<template>
  <section class="panel-12589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12589");
const base = ref(12589);
const total = computed(() => base.value * 2);

function incrementar12589() {
  base.value++;
}
</script>
