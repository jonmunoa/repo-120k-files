<template>
  <section class="panel-14193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14193");
const base = ref(14193);
const total = computed(() => base.value * 2);

function incrementar14193() {
  base.value++;
}
</script>
