// fichero 27006 -- macros y constantes -- MODIFICADO
#define LIMITE_27006 27206
#define FACTOR_27006 3

int aplicar_limite27006(int valor) {
    if (valor > LIMITE_27006) return LIMITE_27006;
    return valor * FACTOR_27006;
}
