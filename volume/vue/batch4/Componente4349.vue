<template>
  <section class="panel-4349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4349");
const base = ref(4349);
const total = computed(() => base.value * 2);

function incrementar4349() {
  base.value++;
}
</script>
