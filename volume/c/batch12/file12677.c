// fichero 12677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12677;

Registro12677 crear_registro12677(int id) {
    Registro12677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
