// fichero 19622 -- macros y constantes -- MODIFICADO
#define LIMITE_19622 19822
#define FACTOR_19622 4

int aplicar_limite19622(int valor) {
    if (valor > LIMITE_19622) return LIMITE_19622;
    return valor * FACTOR_19622;
}
