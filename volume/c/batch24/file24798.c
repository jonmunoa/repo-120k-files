// fichero 24798 -- macros y constantes -- MODIFICADO
#define LIMITE_24798 24998
#define FACTOR_24798 5

int aplicar_limite24798(int valor) {
    if (valor > LIMITE_24798) return LIMITE_24798;
    return valor * FACTOR_24798;
}
