// fichero 27406 -- macros y constantes -- MODIFICADO
#define LIMITE_27406 27606
#define FACTOR_27406 3

int aplicar_limite27406(int valor) {
    if (valor > LIMITE_27406) return LIMITE_27406;
    return valor * FACTOR_27406;
}
