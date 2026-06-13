// fichero 49610 -- macros y constantes
#define LIMITE_49610 49710
#define FACTOR_49610 1

int aplicar_limite49610(int valor) {
    if (valor > LIMITE_49610) return LIMITE_49610;
    return valor * FACTOR_49610;
}
