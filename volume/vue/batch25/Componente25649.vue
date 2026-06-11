<template>
  <section class="panel-25649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25649");
const base = ref(25649);
const total = computed(() => base.value * 2);

function incrementar25649() {
  base.value++;
}
</script>
