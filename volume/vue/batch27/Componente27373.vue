<template>
  <section class="panel-27373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27373");
const base = ref(27373);
const total = computed(() => base.value * 2);

function incrementar27373() {
  base.value++;
}
</script>
