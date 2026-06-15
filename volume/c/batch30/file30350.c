// fichero 30350 -- macros y constantes -- MODIFICADO
#define LIMITE_30350 30550
#define FACTOR_30350 2

int aplicar_limite30350(int valor) {
    if (valor > LIMITE_30350) return LIMITE_30350;
    return valor * FACTOR_30350;
}
