// fichero 38345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38345;

Registro38345 crear_registro38345(int id) {
    Registro38345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
