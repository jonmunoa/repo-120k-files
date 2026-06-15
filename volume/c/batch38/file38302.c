// fichero 38302 -- macros y constantes -- MODIFICADO
#define LIMITE_38302 38502
#define FACTOR_38302 4

int aplicar_limite38302(int valor) {
    if (valor > LIMITE_38302) return LIMITE_38302;
    return valor * FACTOR_38302;
}
