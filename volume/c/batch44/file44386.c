// fichero 44386 -- macros y constantes
#define LIMITE_44386 44486
#define FACTOR_44386 2

int aplicar_limite44386(int valor) {
    if (valor > LIMITE_44386) return LIMITE_44386;
    return valor * FACTOR_44386;
}
