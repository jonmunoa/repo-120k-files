// fichero 14945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14945;

Registro14945 crear_registro14945(int id) {
    Registro14945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
