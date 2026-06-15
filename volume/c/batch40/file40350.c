// fichero 40350 -- macros y constantes -- MODIFICADO
#define LIMITE_40350 40550
#define FACTOR_40350 2

int aplicar_limite40350(int valor) {
    if (valor > LIMITE_40350) return LIMITE_40350;
    return valor * FACTOR_40350;
}
