<template>
  <section class="panel-9649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9649");
const base = ref(9649);
const total = computed(() => base.value * 2);

function incrementar9649() {
  base.value++;
}
</script>
