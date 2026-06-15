// fichero 41345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41345;

Registro41345 crear_registro41345(int id) {
    Registro41345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
