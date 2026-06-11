<template>
  <section class="panel-13121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13121");
const base = ref(13121);
const total = computed(() => base.value * 2);

function incrementar13121() {
  base.value++;
}
</script>
