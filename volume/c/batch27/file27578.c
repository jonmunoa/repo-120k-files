// fichero 27578 -- macros y constantes -- MODIFICADO
#define LIMITE_27578 27778
#define FACTOR_27578 5

int aplicar_limite27578(int valor) {
    if (valor > LIMITE_27578) return LIMITE_27578;
    return valor * FACTOR_27578;
}
