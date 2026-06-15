// fichero 20521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20521;

Registro20521 crear_registro20521(int id) {
    Registro20521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
