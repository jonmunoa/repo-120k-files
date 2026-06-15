// fichero 17358 -- macros y constantes -- MODIFICADO
#define LIMITE_17358 17558
#define FACTOR_17358 5

int aplicar_limite17358(int valor) {
    if (valor > LIMITE_17358) return LIMITE_17358;
    return valor * FACTOR_17358;
}
