<template>
  <section class="panel-5373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5373");
const base = ref(5373);
const total = computed(() => base.value * 2);

function incrementar5373() {
  base.value++;
}
</script>
