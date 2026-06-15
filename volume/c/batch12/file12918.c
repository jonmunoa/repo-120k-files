// fichero 12918 -- macros y constantes -- MODIFICADO
#define LIMITE_12918 13118
#define FACTOR_12918 5

int aplicar_limite12918(int valor) {
    if (valor > LIMITE_12918) return LIMITE_12918;
    return valor * FACTOR_12918;
}
