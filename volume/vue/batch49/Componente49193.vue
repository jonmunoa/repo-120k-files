<template>
  <section class="panel-49193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49193");
const base = ref(49193);
const total = computed(() => base.value * 2);

function incrementar49193() {
  base.value++;
}
</script>
