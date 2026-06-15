// fichero 48386 -- macros y constantes -- MODIFICADO
#define LIMITE_48386 48586
#define FACTOR_48386 3

int aplicar_limite48386(int valor) {
    if (valor > LIMITE_48386) return LIMITE_48386;
    return valor * FACTOR_48386;
}
