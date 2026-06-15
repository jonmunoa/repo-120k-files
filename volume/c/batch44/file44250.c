// fichero 44250 -- macros y constantes -- MODIFICADO
#define LIMITE_44250 44450
#define FACTOR_44250 2

int aplicar_limite44250(int valor) {
    if (valor > LIMITE_44250) return LIMITE_44250;
    return valor * FACTOR_44250;
}
