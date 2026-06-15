// fichero 38206 -- macros y constantes -- MODIFICADO
#define LIMITE_38206 38406
#define FACTOR_38206 3

int aplicar_limite38206(int valor) {
    if (valor > LIMITE_38206) return LIMITE_38206;
    return valor * FACTOR_38206;
}
