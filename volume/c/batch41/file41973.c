// fichero 41973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41973;

Registro41973 crear_registro41973(int id) {
    Registro41973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
