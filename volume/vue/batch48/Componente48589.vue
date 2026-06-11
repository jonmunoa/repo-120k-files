<template>
  <section class="panel-48589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48589");
const base = ref(48589);
const total = computed(() => base.value * 2);

function incrementar48589() {
  base.value++;
}
</script>
