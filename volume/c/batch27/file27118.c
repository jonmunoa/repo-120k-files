// fichero 27118 -- macros y constantes -- MODIFICADO
#define LIMITE_27118 27318
#define FACTOR_27118 5

int aplicar_limite27118(int valor) {
    if (valor > LIMITE_27118) return LIMITE_27118;
    return valor * FACTOR_27118;
}
