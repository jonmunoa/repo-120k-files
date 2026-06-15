// fichero 7566 -- macros y constantes -- MODIFICADO
#define LIMITE_7566 7766
#define FACTOR_7566 3

int aplicar_limite7566(int valor) {
    if (valor > LIMITE_7566) return LIMITE_7566;
    return valor * FACTOR_7566;
}
