// fichero 17290 -- macros y constantes -- MODIFICADO
#define LIMITE_17290 17490
#define FACTOR_17290 2

int aplicar_limite17290(int valor) {
    if (valor > LIMITE_17290) return LIMITE_17290;
    return valor * FACTOR_17290;
}
