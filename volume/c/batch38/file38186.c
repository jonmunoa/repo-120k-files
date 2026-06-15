// fichero 38186 -- macros y constantes -- MODIFICADO
#define LIMITE_38186 38386
#define FACTOR_38186 3

int aplicar_limite38186(int valor) {
    if (valor > LIMITE_38186) return LIMITE_38186;
    return valor * FACTOR_38186;
}
