<template>
  <section class="panel-35385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35385");
const base = ref(35385);
const total = computed(() => base.value * 2);

function incrementar35385() {
  base.value++;
}
</script>
