// fichero 16686 -- macros y constantes -- MODIFICADO
#define LIMITE_16686 16886
#define FACTOR_16686 3

int aplicar_limite16686(int valor) {
    if (valor > LIMITE_16686) return LIMITE_16686;
    return valor * FACTOR_16686;
}
