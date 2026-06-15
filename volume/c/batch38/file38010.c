// fichero 38010 -- macros y constantes -- MODIFICADO
#define LIMITE_38010 38210
#define FACTOR_38010 2

int aplicar_limite38010(int valor) {
    if (valor > LIMITE_38010) return LIMITE_38010;
    return valor * FACTOR_38010;
}
