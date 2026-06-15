// fichero 44386 -- macros y constantes -- MODIFICADO
#define LIMITE_44386 44586
#define FACTOR_44386 3

int aplicar_limite44386(int valor) {
    if (valor > LIMITE_44386) return LIMITE_44386;
    return valor * FACTOR_44386;
}
