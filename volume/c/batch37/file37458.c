// fichero 37458 -- macros y constantes -- MODIFICADO
#define LIMITE_37458 37658
#define FACTOR_37458 5

int aplicar_limite37458(int valor) {
    if (valor > LIMITE_37458) return LIMITE_37458;
    return valor * FACTOR_37458;
}
