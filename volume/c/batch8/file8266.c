// fichero 8266 -- macros y constantes -- MODIFICADO
#define LIMITE_8266 8466
#define FACTOR_8266 3

int aplicar_limite8266(int valor) {
    if (valor > LIMITE_8266) return LIMITE_8266;
    return valor * FACTOR_8266;
}
