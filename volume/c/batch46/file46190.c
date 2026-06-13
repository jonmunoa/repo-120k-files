// fichero 46190 -- macros y constantes
#define LIMITE_46190 46290
#define FACTOR_46190 1

int aplicar_limite46190(int valor) {
    if (valor > LIMITE_46190) return LIMITE_46190;
    return valor * FACTOR_46190;
}
