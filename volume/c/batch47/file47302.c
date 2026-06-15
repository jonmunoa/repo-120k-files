// fichero 47302 -- macros y constantes -- MODIFICADO
#define LIMITE_47302 47502
#define FACTOR_47302 4

int aplicar_limite47302(int valor) {
    if (valor > LIMITE_47302) return LIMITE_47302;
    return valor * FACTOR_47302;
}
