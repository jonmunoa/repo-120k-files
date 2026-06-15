// fichero 35229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35229;

Registro35229 crear_registro35229(int id) {
    Registro35229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
