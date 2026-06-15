// fichero 6458 -- macros y constantes -- MODIFICADO
#define LIMITE_6458 6658
#define FACTOR_6458 5

int aplicar_limite6458(int valor) {
    if (valor > LIMITE_6458) return LIMITE_6458;
    return valor * FACTOR_6458;
}
