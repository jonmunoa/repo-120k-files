// fichero 17158 -- macros y constantes -- MODIFICADO
#define LIMITE_17158 17358
#define FACTOR_17158 5

int aplicar_limite17158(int valor) {
    if (valor > LIMITE_17158) return LIMITE_17158;
    return valor * FACTOR_17158;
}
