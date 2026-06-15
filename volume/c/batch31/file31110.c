// fichero 31110 -- macros y constantes -- MODIFICADO
#define LIMITE_31110 31310
#define FACTOR_31110 2

int aplicar_limite31110(int valor) {
    if (valor > LIMITE_31110) return LIMITE_31110;
    return valor * FACTOR_31110;
}
