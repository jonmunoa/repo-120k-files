// fichero 40182 -- macros y constantes
#define LIMITE_40182 40282
#define FACTOR_40182 3

int aplicar_limite40182(int valor) {
    if (valor > LIMITE_40182) return LIMITE_40182;
    return valor * FACTOR_40182;
}
