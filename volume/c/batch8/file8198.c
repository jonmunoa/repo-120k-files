// fichero 8198 -- macros y constantes -- MODIFICADO
#define LIMITE_8198 8398
#define FACTOR_8198 5

int aplicar_limite8198(int valor) {
    if (valor > LIMITE_8198) return LIMITE_8198;
    return valor * FACTOR_8198;
}
