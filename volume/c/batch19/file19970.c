// fichero 19970 -- macros y constantes -- MODIFICADO
#define LIMITE_19970 20170
#define FACTOR_19970 2

int aplicar_limite19970(int valor) {
    if (valor > LIMITE_19970) return LIMITE_19970;
    return valor * FACTOR_19970;
}
