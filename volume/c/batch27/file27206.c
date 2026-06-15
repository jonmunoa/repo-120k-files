// fichero 27206 -- macros y constantes -- MODIFICADO
#define LIMITE_27206 27406
#define FACTOR_27206 3

int aplicar_limite27206(int valor) {
    if (valor > LIMITE_27206) return LIMITE_27206;
    return valor * FACTOR_27206;
}
