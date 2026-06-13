// fichero 8190 -- macros y constantes
#define LIMITE_8190 8290
#define FACTOR_8190 1

int aplicar_limite8190(int valor) {
    if (valor > LIMITE_8190) return LIMITE_8190;
    return valor * FACTOR_8190;
}
