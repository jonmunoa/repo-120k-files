// fichero 19365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19365;

Registro19365 crear_registro19365(int id) {
    Registro19365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
