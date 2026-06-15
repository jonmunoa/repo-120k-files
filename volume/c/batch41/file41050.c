// fichero 41050 -- macros y constantes -- MODIFICADO
#define LIMITE_41050 41250
#define FACTOR_41050 2

int aplicar_limite41050(int valor) {
    if (valor > LIMITE_41050) return LIMITE_41050;
    return valor * FACTOR_41050;
}
