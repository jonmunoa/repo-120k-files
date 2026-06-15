// fichero 41957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41957;

Registro41957 crear_registro41957(int id) {
    Registro41957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
