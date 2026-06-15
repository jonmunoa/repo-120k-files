// fichero 25106 -- macros y constantes -- MODIFICADO
#define LIMITE_25106 25306
#define FACTOR_25106 3

int aplicar_limite25106(int valor) {
    if (valor > LIMITE_25106) return LIMITE_25106;
    return valor * FACTOR_25106;
}
