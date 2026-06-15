// fichero 89 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro89;

Registro89 crear_registro89(int id) {
    Registro89 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
