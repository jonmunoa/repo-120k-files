<template>
  <section class="panel-53349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53349");
const base = ref(53349);
const total = computed(() => base.value * 2);

function incrementar53349() {
  base.value++;
}
</script>
