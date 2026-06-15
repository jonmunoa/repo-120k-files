// fichero 44169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44169;

Registro44169 crear_registro44169(int id) {
    Registro44169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
