// fichero 27958 -- macros y constantes -- MODIFICADO
#define LIMITE_27958 28158
#define FACTOR_27958 5

int aplicar_limite27958(int valor) {
    if (valor > LIMITE_27958) return LIMITE_27958;
    return valor * FACTOR_27958;
}
