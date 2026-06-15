// fichero 48358 -- macros y constantes -- MODIFICADO
#define LIMITE_48358 48558
#define FACTOR_48358 5

int aplicar_limite48358(int valor) {
    if (valor > LIMITE_48358) return LIMITE_48358;
    return valor * FACTOR_48358;
}
