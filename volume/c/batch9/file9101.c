// fichero 9101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9101;

Registro9101 crear_registro9101(int id) {
    Registro9101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
