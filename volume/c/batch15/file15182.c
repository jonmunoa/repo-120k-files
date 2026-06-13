// fichero 15182 -- macros y constantes
#define LIMITE_15182 15282
#define FACTOR_15182 3

int aplicar_limite15182(int valor) {
    if (valor > LIMITE_15182) return LIMITE_15182;
    return valor * FACTOR_15182;
}
