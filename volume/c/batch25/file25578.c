// fichero 25578 -- macros y constantes -- MODIFICADO
#define LIMITE_25578 25778
#define FACTOR_25578 5

int aplicar_limite25578(int valor) {
    if (valor > LIMITE_25578) return LIMITE_25578;
    return valor * FACTOR_25578;
}
