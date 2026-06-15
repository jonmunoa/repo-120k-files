// fichero 24190 -- macros y constantes -- MODIFICADO
#define LIMITE_24190 24390
#define FACTOR_24190 2

int aplicar_limite24190(int valor) {
    if (valor > LIMITE_24190) return LIMITE_24190;
    return valor * FACTOR_24190;
}
