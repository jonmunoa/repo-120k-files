<template>
  <section class="panel-13349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13349");
const base = ref(13349);
const total = computed(() => base.value * 2);

function incrementar13349() {
  base.value++;
}
</script>
