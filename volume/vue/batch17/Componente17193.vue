<template>
  <section class="panel-17193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17193");
const base = ref(17193);
const total = computed(() => base.value * 2);

function incrementar17193() {
  base.value++;
}
</script>
