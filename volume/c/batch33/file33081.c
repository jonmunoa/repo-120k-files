// fichero 33081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33081;

Registro33081 crear_registro33081(int id) {
    Registro33081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33081(Registro33081 r) {
    return r.valor + r.id;
}
