// fichero 27718 -- macros y constantes -- MODIFICADO
#define LIMITE_27718 27918
#define FACTOR_27718 5

int aplicar_limite27718(int valor) {
    if (valor > LIMITE_27718) return LIMITE_27718;
    return valor * FACTOR_27718;
}
