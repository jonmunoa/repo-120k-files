// fichero 7634 -- macros y constantes -- MODIFICADO
#define LIMITE_7634 7834
#define FACTOR_7634 6

int aplicar_limite7634(int valor) {
    if (valor > LIMITE_7634) return LIMITE_7634;
    return valor * FACTOR_7634;
}
