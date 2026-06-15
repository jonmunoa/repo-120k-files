// fichero 32190 -- macros y constantes -- MODIFICADO
#define LIMITE_32190 32390
#define FACTOR_32190 2

int aplicar_limite32190(int valor) {
    if (valor > LIMITE_32190) return LIMITE_32190;
    return valor * FACTOR_32190;
}
