// fichero 44585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44585;

Registro44585 crear_registro44585(int id) {
    Registro44585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
