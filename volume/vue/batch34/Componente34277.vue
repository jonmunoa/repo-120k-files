<template>
  <section class="panel-34277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34277");
const base = ref(34277);
const total = computed(() => base.value * 2);

function incrementar34277() {
  base.value++;
}
</script>
