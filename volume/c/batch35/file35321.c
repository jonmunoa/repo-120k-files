// fichero 35321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35321;

Registro35321 crear_registro35321(int id) {
    Registro35321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
