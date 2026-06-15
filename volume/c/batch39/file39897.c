// fichero 39897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39897;

Registro39897 crear_registro39897(int id) {
    Registro39897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
