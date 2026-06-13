// fichero 49770 -- macros y constantes
#define LIMITE_49770 49870
#define FACTOR_49770 1

int aplicar_limite49770(int valor) {
    if (valor > LIMITE_49770) return LIMITE_49770;
    return valor * FACTOR_49770;
}
