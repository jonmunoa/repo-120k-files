// fichero 44358 -- macros y constantes -- MODIFICADO
#define LIMITE_44358 44558
#define FACTOR_44358 5

int aplicar_limite44358(int valor) {
    if (valor > LIMITE_44358) return LIMITE_44358;
    return valor * FACTOR_44358;
}
