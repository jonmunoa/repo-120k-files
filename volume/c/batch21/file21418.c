// fichero 21418 -- macros y constantes -- MODIFICADO
#define LIMITE_21418 21618
#define FACTOR_21418 5

int aplicar_limite21418(int valor) {
    if (valor > LIMITE_21418) return LIMITE_21418;
    return valor * FACTOR_21418;
}
