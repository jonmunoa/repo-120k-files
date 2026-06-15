// fichero 41721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41721;

Registro41721 crear_registro41721(int id) {
    Registro41721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
