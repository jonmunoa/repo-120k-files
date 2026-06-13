// fichero 49838 -- macros y constantes
#define LIMITE_49838 49938
#define FACTOR_49838 4

int aplicar_limite49838(int valor) {
    if (valor > LIMITE_49838) return LIMITE_49838;
    return valor * FACTOR_49838;
}
