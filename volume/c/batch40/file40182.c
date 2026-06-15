// fichero 40182 -- macros y constantes -- MODIFICADO
#define LIMITE_40182 40382
#define FACTOR_40182 4

int aplicar_limite40182(int valor) {
    if (valor > LIMITE_40182) return LIMITE_40182;
    return valor * FACTOR_40182;
}
