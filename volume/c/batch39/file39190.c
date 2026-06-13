// fichero 39190 -- macros y constantes
#define LIMITE_39190 39290
#define FACTOR_39190 1

int aplicar_limite39190(int valor) {
    if (valor > LIMITE_39190) return LIMITE_39190;
    return valor * FACTOR_39190;
}
