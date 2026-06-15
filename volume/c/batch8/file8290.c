// fichero 8290 -- macros y constantes -- MODIFICADO
#define LIMITE_8290 8490
#define FACTOR_8290 2

int aplicar_limite8290(int valor) {
    if (valor > LIMITE_8290) return LIMITE_8290;
    return valor * FACTOR_8290;
}
