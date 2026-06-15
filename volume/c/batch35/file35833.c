// fichero 35833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35833;

Registro35833 crear_registro35833(int id) {
    Registro35833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
