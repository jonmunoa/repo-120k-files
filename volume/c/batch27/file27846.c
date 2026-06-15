// fichero 27846 -- macros y constantes -- MODIFICADO
#define LIMITE_27846 28046
#define FACTOR_27846 3

int aplicar_limite27846(int valor) {
    if (valor > LIMITE_27846) return LIMITE_27846;
    return valor * FACTOR_27846;
}
