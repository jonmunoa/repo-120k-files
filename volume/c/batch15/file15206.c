// fichero 15206 -- macros y constantes -- MODIFICADO
#define LIMITE_15206 15406
#define FACTOR_15206 3

int aplicar_limite15206(int valor) {
    if (valor > LIMITE_15206) return LIMITE_15206;
    return valor * FACTOR_15206;
}
