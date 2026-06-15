// fichero 6290 -- macros y constantes -- MODIFICADO
#define LIMITE_6290 6490
#define FACTOR_6290 2

int aplicar_limite6290(int valor) {
    if (valor > LIMITE_6290) return LIMITE_6290;
    return valor * FACTOR_6290;
}
