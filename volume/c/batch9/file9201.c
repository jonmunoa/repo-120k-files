// fichero 9201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9201;

Registro9201 crear_registro9201(int id) {
    Registro9201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
