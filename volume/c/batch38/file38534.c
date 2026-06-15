// fichero 38534 -- macros y constantes -- MODIFICADO
#define LIMITE_38534 38734
#define FACTOR_38534 6

int aplicar_limite38534(int valor) {
    if (valor > LIMITE_38534) return LIMITE_38534;
    return valor * FACTOR_38534;
}
