// fichero 23182 -- macros y constantes -- MODIFICADO
#define LIMITE_23182 23382
#define FACTOR_23182 4

int aplicar_limite23182(int valor) {
    if (valor > LIMITE_23182) return LIMITE_23182;
    return valor * FACTOR_23182;
}
