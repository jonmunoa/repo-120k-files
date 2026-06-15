// fichero 41290 -- macros y constantes -- MODIFICADO
#define LIMITE_41290 41490
#define FACTOR_41290 2

int aplicar_limite41290(int valor) {
    if (valor > LIMITE_41290) return LIMITE_41290;
    return valor * FACTOR_41290;
}
