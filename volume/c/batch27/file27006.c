// fichero 27006 -- macros y constantes
#define LIMITE_27006 27106
#define FACTOR_27006 2

int aplicar_limite27006(int valor) {
    if (valor > LIMITE_27006) return LIMITE_27006;
    return valor * FACTOR_27006;
}
