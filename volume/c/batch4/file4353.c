// fichero 4353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4353;

Registro4353 crear_registro4353(int id) {
    Registro4353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
