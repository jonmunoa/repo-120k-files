<template>
  <section class="panel-26661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26661");
const base = ref(26661);
const total = computed(() => base.value * 2);

function incrementar26661() {
  base.value++;
}
</script>
