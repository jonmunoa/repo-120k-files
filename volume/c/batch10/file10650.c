// fichero 10650 -- macros y constantes -- MODIFICADO
#define LIMITE_10650 10850
#define FACTOR_10650 2

int aplicar_limite10650(int valor) {
    if (valor > LIMITE_10650) return LIMITE_10650;
    return valor * FACTOR_10650;
}
