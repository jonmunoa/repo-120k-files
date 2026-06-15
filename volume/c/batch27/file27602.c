// fichero 27602 -- macros y constantes -- MODIFICADO
#define LIMITE_27602 27802
#define FACTOR_27602 4

int aplicar_limite27602(int valor) {
    if (valor > LIMITE_27602) return LIMITE_27602;
    return valor * FACTOR_27602;
}
