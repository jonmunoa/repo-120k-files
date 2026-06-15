// fichero 35485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35485;

Registro35485 crear_registro35485(int id) {
    Registro35485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
