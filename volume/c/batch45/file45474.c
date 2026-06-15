// fichero 45474 -- macros y constantes -- MODIFICADO
#define LIMITE_45474 45674
#define FACTOR_45474 6

int aplicar_limite45474(int valor) {
    if (valor > LIMITE_45474) return LIMITE_45474;
    return valor * FACTOR_45474;
}
