// fichero 44918 -- macros y constantes -- MODIFICADO
#define LIMITE_44918 45118
#define FACTOR_44918 5

int aplicar_limite44918(int valor) {
    if (valor > LIMITE_44918) return LIMITE_44918;
    return valor * FACTOR_44918;
}
