// fichero 49330 -- macros y constantes
#define LIMITE_49330 49430
#define FACTOR_49330 1

int aplicar_limite49330(int valor) {
    if (valor > LIMITE_49330) return LIMITE_49330;
    return valor * FACTOR_49330;
}
