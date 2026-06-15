// fichero 41461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41461;

Registro41461 crear_registro41461(int id) {
    Registro41461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
