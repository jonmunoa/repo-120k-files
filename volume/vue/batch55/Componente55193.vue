<template>
  <section class="panel-55193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55193");
const base = ref(55193);
const total = computed(() => base.value * 2);

function incrementar55193() {
  base.value++;
}
</script>
