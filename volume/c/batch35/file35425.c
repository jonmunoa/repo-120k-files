// fichero 35425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35425;

Registro35425 crear_registro35425(int id) {
    Registro35425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
