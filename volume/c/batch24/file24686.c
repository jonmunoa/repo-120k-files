// fichero 24686 -- macros y constantes -- MODIFICADO
#define LIMITE_24686 24886
#define FACTOR_24686 3

int aplicar_limite24686(int valor) {
    if (valor > LIMITE_24686) return LIMITE_24686;
    return valor * FACTOR_24686;
}
