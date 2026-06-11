<template>
  <section class="panel-25097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25097");
const base = ref(25097);
const total = computed(() => base.value * 2);

function incrementar25097() {
  base.value++;
}
</script>
