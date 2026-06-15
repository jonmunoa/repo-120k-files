// fichero 34010 -- macros y constantes -- MODIFICADO
#define LIMITE_34010 34210
#define FACTOR_34010 2

int aplicar_limite34010(int valor) {
    if (valor > LIMITE_34010) return LIMITE_34010;
    return valor * FACTOR_34010;
}
