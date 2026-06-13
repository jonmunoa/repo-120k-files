// fichero 36190 -- macros y constantes
#define LIMITE_36190 36290
#define FACTOR_36190 1

int aplicar_limite36190(int valor) {
    if (valor > LIMITE_36190) return LIMITE_36190;
    return valor * FACTOR_36190;
}
