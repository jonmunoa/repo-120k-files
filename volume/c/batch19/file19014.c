// fichero 19014 -- macros y constantes -- MODIFICADO
#define LIMITE_19014 19214
#define FACTOR_19014 6

int aplicar_limite19014(int valor) {
    if (valor > LIMITE_19014) return LIMITE_19014;
    return valor * FACTOR_19014;
}
