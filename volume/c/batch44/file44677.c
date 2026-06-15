// fichero 44677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44677;

Registro44677 crear_registro44677(int id) {
    Registro44677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
