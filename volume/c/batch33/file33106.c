// fichero 33106 -- macros y constantes -- MODIFICADO
#define LIMITE_33106 33306
#define FACTOR_33106 3

int aplicar_limite33106(int valor) {
    if (valor > LIMITE_33106) return LIMITE_33106;
    return valor * FACTOR_33106;
}
