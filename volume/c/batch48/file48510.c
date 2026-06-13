// fichero 48510 -- macros y constantes
#define LIMITE_48510 48610
#define FACTOR_48510 1

int aplicar_limite48510(int valor) {
    if (valor > LIMITE_48510) return LIMITE_48510;
    return valor * FACTOR_48510;
}
