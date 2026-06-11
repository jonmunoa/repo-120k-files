<template>
  <section class="panel-26157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26157");
const base = ref(26157);
const total = computed(() => base.value * 2);

function incrementar26157() {
  base.value++;
}
</script>
