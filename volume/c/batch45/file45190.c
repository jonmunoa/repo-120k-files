// fichero 45190 -- macros y constantes
#define LIMITE_45190 45290
#define FACTOR_45190 1

int aplicar_limite45190(int valor) {
    if (valor > LIMITE_45190) return LIMITE_45190;
    return valor * FACTOR_45190;
}
