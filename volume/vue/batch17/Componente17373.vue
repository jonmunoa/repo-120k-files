<template>
  <section class="panel-17373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17373");
const base = ref(17373);
const total = computed(() => base.value * 2);

function incrementar17373() {
  base.value++;
}
</script>
