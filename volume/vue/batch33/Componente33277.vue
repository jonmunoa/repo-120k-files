<template>
  <section class="panel-33277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33277");
const base = ref(33277);
const total = computed(() => base.value * 2);

function incrementar33277() {
  base.value++;
}
</script>
