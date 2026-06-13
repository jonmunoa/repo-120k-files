// fichero 37450 -- macros y constantes
#define LIMITE_37450 37550
#define FACTOR_37450 1

int aplicar_limite37450(int valor) {
    if (valor > LIMITE_37450) return LIMITE_37450;
    return valor * FACTOR_37450;
}
