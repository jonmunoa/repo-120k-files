// fichero 21862 -- macros y constantes -- MODIFICADO
#define LIMITE_21862 22062
#define FACTOR_21862 4

int aplicar_limite21862(int valor) {
    if (valor > LIMITE_21862) return LIMITE_21862;
    return valor * FACTOR_21862;
}
