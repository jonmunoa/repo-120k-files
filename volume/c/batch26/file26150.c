// fichero 26150 -- macros y constantes -- MODIFICADO
#define LIMITE_26150 26350
#define FACTOR_26150 2

int aplicar_limite26150(int valor) {
    if (valor > LIMITE_26150) return LIMITE_26150;
    return valor * FACTOR_26150;
}
