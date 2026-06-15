// fichero 17110 -- macros y constantes -- MODIFICADO
#define LIMITE_17110 17310
#define FACTOR_17110 2

int aplicar_limite17110(int valor) {
    if (valor > LIMITE_17110) return LIMITE_17110;
    return valor * FACTOR_17110;
}
