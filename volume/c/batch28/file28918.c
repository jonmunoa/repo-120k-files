// fichero 28918 -- macros y constantes -- MODIFICADO
#define LIMITE_28918 29118
#define FACTOR_28918 5

int aplicar_limite28918(int valor) {
    if (valor > LIMITE_28918) return LIMITE_28918;
    return valor * FACTOR_28918;
}
