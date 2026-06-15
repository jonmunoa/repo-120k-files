// fichero 17198 -- macros y constantes -- MODIFICADO
#define LIMITE_17198 17398
#define FACTOR_17198 5

int aplicar_limite17198(int valor) {
    if (valor > LIMITE_17198) return LIMITE_17198;
    return valor * FACTOR_17198;
}
