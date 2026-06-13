// fichero 28190 -- macros y constantes
#define LIMITE_28190 28290
#define FACTOR_28190 1

int aplicar_limite28190(int valor) {
    if (valor > LIMITE_28190) return LIMITE_28190;
    return valor * FACTOR_28190;
}
