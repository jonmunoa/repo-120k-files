// fichero 23194 -- macros y constantes -- MODIFICADO
#define LIMITE_23194 23394
#define FACTOR_23194 6

int aplicar_limite23194(int valor) {
    if (valor > LIMITE_23194) return LIMITE_23194;
    return valor * FACTOR_23194;
}
