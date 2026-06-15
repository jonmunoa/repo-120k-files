// fichero 38389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38389;

Registro38389 crear_registro38389(int id) {
    Registro38389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
