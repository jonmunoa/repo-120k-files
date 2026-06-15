// fichero 38666 -- macros y constantes -- MODIFICADO
#define LIMITE_38666 38866
#define FACTOR_38666 3

int aplicar_limite38666(int valor) {
    if (valor > LIMITE_38666) return LIMITE_38666;
    return valor * FACTOR_38666;
}
