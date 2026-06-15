// fichero 34002 -- macros y constantes -- MODIFICADO
#define LIMITE_34002 34202
#define FACTOR_34002 4

int aplicar_limite34002(int valor) {
    if (valor > LIMITE_34002) return LIMITE_34002;
    return valor * FACTOR_34002;
}
