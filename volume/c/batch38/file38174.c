// fichero 38174 -- macros y constantes
#define LIMITE_38174 38274
#define FACTOR_38174 5

int aplicar_limite38174(int valor) {
    if (valor > LIMITE_38174) return LIMITE_38174;
    return valor * FACTOR_38174;
}
