// fichero 15650 -- macros y constantes -- MODIFICADO
#define LIMITE_15650 15850
#define FACTOR_15650 2

int aplicar_limite15650(int valor) {
    if (valor > LIMITE_15650) return LIMITE_15650;
    return valor * FACTOR_15650;
}
