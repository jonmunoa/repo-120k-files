// fichero 8198 -- macros y constantes
#define LIMITE_8198 8298
#define FACTOR_8198 4

int aplicar_limite8198(int valor) {
    if (valor > LIMITE_8198) return LIMITE_8198;
    return valor * FACTOR_8198;
}
