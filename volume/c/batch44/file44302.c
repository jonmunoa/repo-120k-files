// fichero 44302 -- macros y constantes
#define LIMITE_44302 44402
#define FACTOR_44302 3

int aplicar_limite44302(int valor) {
    if (valor > LIMITE_44302) return LIMITE_44302;
    return valor * FACTOR_44302;
}
