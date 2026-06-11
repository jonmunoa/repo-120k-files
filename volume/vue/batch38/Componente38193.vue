<template>
  <section class="panel-38193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38193");
const base = ref(38193);
const total = computed(() => base.value * 2);

function incrementar38193() {
  base.value++;
}
</script>
