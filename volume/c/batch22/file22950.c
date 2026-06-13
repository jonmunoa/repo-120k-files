// fichero 22950 -- macros y constantes
#define LIMITE_22950 23050
#define FACTOR_22950 1

int aplicar_limite22950(int valor) {
    if (valor > LIMITE_22950) return LIMITE_22950;
    return valor * FACTOR_22950;
}
