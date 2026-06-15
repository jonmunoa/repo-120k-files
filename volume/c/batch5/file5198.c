// fichero 5198 -- macros y constantes -- MODIFICADO
#define LIMITE_5198 5398
#define FACTOR_5198 5

int aplicar_limite5198(int valor) {
    if (valor > LIMITE_5198) return LIMITE_5198;
    return valor * FACTOR_5198;
}
