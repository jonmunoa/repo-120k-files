<template>
  <section class="panel-34421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34421");
const base = ref(34421);
const total = computed(() => base.value * 2);

function incrementar34421() {
  base.value++;
}
</script>
