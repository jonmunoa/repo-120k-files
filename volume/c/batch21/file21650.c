// fichero 21650 -- macros y constantes -- MODIFICADO
#define LIMITE_21650 21850
#define FACTOR_21650 2

int aplicar_limite21650(int valor) {
    if (valor > LIMITE_21650) return LIMITE_21650;
    return valor * FACTOR_21650;
}
