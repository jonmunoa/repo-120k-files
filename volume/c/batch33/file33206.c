// fichero 33206 -- macros y constantes -- MODIFICADO
#define LIMITE_33206 33406
#define FACTOR_33206 3

int aplicar_limite33206(int valor) {
    if (valor > LIMITE_33206) return LIMITE_33206;
    return valor * FACTOR_33206;
}
