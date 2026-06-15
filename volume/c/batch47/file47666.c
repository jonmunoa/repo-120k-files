// fichero 47666 -- macros y constantes -- MODIFICADO
#define LIMITE_47666 47866
#define FACTOR_47666 3

int aplicar_limite47666(int valor) {
    if (valor > LIMITE_47666) return LIMITE_47666;
    return valor * FACTOR_47666;
}
