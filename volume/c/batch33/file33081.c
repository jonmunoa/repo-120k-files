// fichero 33081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33081;

Registro33081 crear_registro33081(int id) {
    Registro33081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
