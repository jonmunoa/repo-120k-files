// fichero 40734 -- macros y constantes -- MODIFICADO
#define LIMITE_40734 40934
#define FACTOR_40734 6

int aplicar_limite40734(int valor) {
    if (valor > LIMITE_40734) return LIMITE_40734;
    return valor * FACTOR_40734;
}
