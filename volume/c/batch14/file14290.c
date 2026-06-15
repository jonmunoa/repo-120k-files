// fichero 14290 -- macros y constantes -- MODIFICADO
#define LIMITE_14290 14490
#define FACTOR_14290 2

int aplicar_limite14290(int valor) {
    if (valor > LIMITE_14290) return LIMITE_14290;
    return valor * FACTOR_14290;
}
