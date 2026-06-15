// fichero 9141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9141;

Registro9141 crear_registro9141(int id) {
    Registro9141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
