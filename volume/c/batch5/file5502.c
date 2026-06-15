// fichero 5502 -- macros y constantes -- MODIFICADO
#define LIMITE_5502 5702
#define FACTOR_5502 4

int aplicar_limite5502(int valor) {
    if (valor > LIMITE_5502) return LIMITE_5502;
    return valor * FACTOR_5502;
}
