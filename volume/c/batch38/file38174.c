// fichero 38174 -- macros y constantes -- MODIFICADO
#define LIMITE_38174 38374
#define FACTOR_38174 6

int aplicar_limite38174(int valor) {
    if (valor > LIMITE_38174) return LIMITE_38174;
    return valor * FACTOR_38174;
}
