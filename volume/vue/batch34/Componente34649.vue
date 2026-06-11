<template>
  <section class="panel-34649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34649");
const base = ref(34649);
const total = computed(() => base.value * 2);

function incrementar34649() {
  base.value++;
}
</script>
