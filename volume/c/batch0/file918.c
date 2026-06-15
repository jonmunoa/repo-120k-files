// fichero 918 -- macros y constantes -- MODIFICADO
#define LIMITE_918 1118
#define FACTOR_918 5

int aplicar_limite918(int valor) {
    if (valor > LIMITE_918) return LIMITE_918;
    return valor * FACTOR_918;
}
