// fichero 12322 -- macros y constantes -- MODIFICADO
#define LIMITE_12322 12522
#define FACTOR_12322 4

int aplicar_limite12322(int valor) {
    if (valor > LIMITE_12322) return LIMITE_12322;
    return valor * FACTOR_12322;
}
