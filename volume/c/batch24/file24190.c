// fichero 24190 -- macros y constantes
#define LIMITE_24190 24290
#define FACTOR_24190 1

int aplicar_limite24190(int valor) {
    if (valor > LIMITE_24190) return LIMITE_24190;
    return valor * FACTOR_24190;
}
