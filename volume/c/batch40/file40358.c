// fichero 40358 -- macros y constantes -- MODIFICADO
#define LIMITE_40358 40558
#define FACTOR_40358 5

int aplicar_limite40358(int valor) {
    if (valor > LIMITE_40358) return LIMITE_40358;
    return valor * FACTOR_40358;
}
