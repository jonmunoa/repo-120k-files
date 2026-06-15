// fichero 5706 -- macros y constantes -- MODIFICADO
#define LIMITE_5706 5906
#define FACTOR_5706 3

int aplicar_limite5706(int valor) {
    if (valor > LIMITE_5706) return LIMITE_5706;
    return valor * FACTOR_5706;
}
