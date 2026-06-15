// fichero 27706 -- macros y constantes -- MODIFICADO
#define LIMITE_27706 27906
#define FACTOR_27706 3

int aplicar_limite27706(int valor) {
    if (valor > LIMITE_27706) return LIMITE_27706;
    return valor * FACTOR_27706;
}
