// fichero 17650 -- macros y constantes -- MODIFICADO
#define LIMITE_17650 17850
#define FACTOR_17650 2

int aplicar_limite17650(int valor) {
    if (valor > LIMITE_17650) return LIMITE_17650;
    return valor * FACTOR_17650;
}
