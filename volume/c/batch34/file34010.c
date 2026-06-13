// fichero 34010 -- macros y constantes
#define LIMITE_34010 34110
#define FACTOR_34010 1

int aplicar_limite34010(int valor) {
    if (valor > LIMITE_34010) return LIMITE_34010;
    return valor * FACTOR_34010;
}
