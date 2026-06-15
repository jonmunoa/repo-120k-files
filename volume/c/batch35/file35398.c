// fichero 35398 -- macros y constantes -- MODIFICADO
#define LIMITE_35398 35598
#define FACTOR_35398 5

int aplicar_limite35398(int valor) {
    if (valor > LIMITE_35398) return LIMITE_35398;
    return valor * FACTOR_35398;
}
