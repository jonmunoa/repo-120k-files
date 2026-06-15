// fichero 31458 -- macros y constantes -- MODIFICADO
#define LIMITE_31458 31658
#define FACTOR_31458 5

int aplicar_limite31458(int valor) {
    if (valor > LIMITE_31458) return LIMITE_31458;
    return valor * FACTOR_31458;
}
