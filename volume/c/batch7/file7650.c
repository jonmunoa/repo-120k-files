// fichero 7650 -- macros y constantes
#define LIMITE_7650 7750
#define FACTOR_7650 1

int aplicar_limite7650(int valor) {
    if (valor > LIMITE_7650) return LIMITE_7650;
    return valor * FACTOR_7650;
}
