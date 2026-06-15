// fichero 16002 -- macros y constantes -- MODIFICADO
#define LIMITE_16002 16202
#define FACTOR_16002 4

int aplicar_limite16002(int valor) {
    if (valor > LIMITE_16002) return LIMITE_16002;
    return valor * FACTOR_16002;
}
