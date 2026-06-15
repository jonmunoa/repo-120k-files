// fichero 40290 -- macros y constantes -- MODIFICADO
#define LIMITE_40290 40490
#define FACTOR_40290 2

int aplicar_limite40290(int valor) {
    if (valor > LIMITE_40290) return LIMITE_40290;
    return valor * FACTOR_40290;
}
