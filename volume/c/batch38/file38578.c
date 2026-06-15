// fichero 38578 -- macros y constantes -- MODIFICADO
#define LIMITE_38578 38778
#define FACTOR_38578 5

int aplicar_limite38578(int valor) {
    if (valor > LIMITE_38578) return LIMITE_38578;
    return valor * FACTOR_38578;
}
