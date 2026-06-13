// fichero 49950 -- macros y constantes
#define LIMITE_49950 50050
#define FACTOR_49950 1

int aplicar_limite49950(int valor) {
    if (valor > LIMITE_49950) return LIMITE_49950;
    return valor * FACTOR_49950;
}
