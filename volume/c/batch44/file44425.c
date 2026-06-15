// fichero 44425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44425;

Registro44425 crear_registro44425(int id) {
    Registro44425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
