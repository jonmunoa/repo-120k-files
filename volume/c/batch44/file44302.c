// fichero 44302 -- macros y constantes -- MODIFICADO
#define LIMITE_44302 44502
#define FACTOR_44302 4

int aplicar_limite44302(int valor) {
    if (valor > LIMITE_44302) return LIMITE_44302;
    return valor * FACTOR_44302;
}
