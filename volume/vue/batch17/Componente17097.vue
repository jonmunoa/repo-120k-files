<template>
  <section class="panel-17097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17097");
const base = ref(17097);
const total = computed(() => base.value * 2);

function incrementar17097() {
  base.value++;
}
</script>
