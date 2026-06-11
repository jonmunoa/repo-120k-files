<template>
  <section class="panel-18193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18193");
const base = ref(18193);
const total = computed(() => base.value * 2);

function incrementar18193() {
  base.value++;
}
</script>
