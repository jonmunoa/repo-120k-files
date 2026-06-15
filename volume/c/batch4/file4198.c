// fichero 4198 -- macros y constantes -- MODIFICADO
#define LIMITE_4198 4398
#define FACTOR_4198 5

int aplicar_limite4198(int valor) {
    if (valor > LIMITE_4198) return LIMITE_4198;
    return valor * FACTOR_4198;
}
