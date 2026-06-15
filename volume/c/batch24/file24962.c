// fichero 24962 -- macros y constantes -- MODIFICADO
#define LIMITE_24962 25162
#define FACTOR_24962 4

int aplicar_limite24962(int valor) {
    if (valor > LIMITE_24962) return LIMITE_24962;
    return valor * FACTOR_24962;
}
