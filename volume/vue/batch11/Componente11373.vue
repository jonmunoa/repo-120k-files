<template>
  <section class="panel-11373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11373");
const base = ref(11373);
const total = computed(() => base.value * 2);

function incrementar11373() {
  base.value++;
}
</script>
