// fichero 31686 -- macros y constantes -- MODIFICADO
#define LIMITE_31686 31886
#define FACTOR_31686 3

int aplicar_limite31686(int valor) {
    if (valor > LIMITE_31686) return LIMITE_31686;
    return valor * FACTOR_31686;
}
