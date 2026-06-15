// fichero 36458 -- macros y constantes -- MODIFICADO
#define LIMITE_36458 36658
#define FACTOR_36458 5

int aplicar_limite36458(int valor) {
    if (valor > LIMITE_36458) return LIMITE_36458;
    return valor * FACTOR_36458;
}
