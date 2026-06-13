// fichero 35450 -- macros y constantes
#define LIMITE_35450 35550
#define FACTOR_35450 1

int aplicar_limite35450(int valor) {
    if (valor > LIMITE_35450) return LIMITE_35450;
    return valor * FACTOR_35450;
}
